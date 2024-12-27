#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;
struct Person{
  string name;
  int priority;
  int arrival;
  Person(string n, int p, int a) : name(n), priority(p), arrival(a){}
};
struct C {
  bool operator()(const Person& p1, const Person& p2) const {
    if ( p1.priority == p2.priority )
      return p1.arrival > p2.arrival;
    return p1.priority < p2.priority;
  }
};
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int t; 
  cin >> t;
  string name;
  int num;
  char letter;
  char opc;
  int arrival = 1;

  unordered_map<char, priority_queue<Person, vector<Person>, C>> vpq;
  unordered_map<char, int> um;
  vector<string> out;
  for ( char i = 'A'; i <= 'Z'; i++ ) 
    um[i] = 0;
  while ( t-- ) {
    cin >> opc;
    if ( opc == 'C' ) {
      cin >> name >> num;
      letter = name[0];
      Person person(name, num-um[letter], arrival++);
      vpq[letter].push(person);
    }
    else if ( opc == 'S' ) {
      cin >> letter >> num;
      um[letter] += num;
    }
    else if ( opc == 'A' ) {
      Person p_max("Alvaro", -2e6, 0);
      for ( char i = 'A'; i <= 'Z'; i++ ) {
        if ( vpq[i].empty() )
          continue;
        if ( p_max.arrival == 0 )
          p_max = vpq[i].top();
        letter = p_max.name[0];
        Person p = vpq[i].top();
        if ( p_max.priority+um[letter] < p.priority+um[i] )
          p_max = p;
        if ( p_max.priority+um[letter] == p.priority+um[i] && p_max.arrival > p.arrival ) 
          p_max = p;
      }
      if ( p_max.arrival == 0 )
        continue;
      out.push_back(p_max.name);
      vpq[p_max.name[0]].pop();
    }
  }
  for ( auto& s : out ) 
    cout << s << endl;
}
