#include <iostream>
#include <queue>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  string e;
  queue<string> t;
  queue<string> r;
  while ( n-- ) {
    cin >> e;
    if ( e == "LLEGA" ) {
      string name; 
      cin >> name;
      t.push(name);
    }
    else {
      string s;
      cin >> s;
      if ( s == "TACO" ) {
        r.push(t.front());
        t.pop();
      }
      else if ( s == "REFRESCO" ) {
        r.pop();
      }
    }
  }
  while ( !t.empty() ) {
    cout << t.front() << " ";
    t.pop();
  }
  cout << endl;
  while ( !r.empty() ) {
    cout << r.front() << " ";
    r.pop();
  }
}
