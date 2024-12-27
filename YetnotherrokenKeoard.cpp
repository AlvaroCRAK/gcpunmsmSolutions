#include <iostream>
//#include <unordered_map>
#include <stack>
//#include <algorithm>
#include <vector>
using namespace std;
string func(string s) {
  stack<int> lower, upper;
  //unordered_map<int, char> um;
  vector<char> v;
  int a = 0;
  for ( int i = 0; i < s.length(); i++ ) {
    char c = s[i];
    if ( c == 'b' ) {
      if ( lower.empty() ) 
        continue;
      int e = lower.top();
      lower.pop();
      v[e] = '.';
      continue;
    }
    else if ( c == 'B' ) {
      if ( upper.empty() ) 
        continue;
      int e = upper.top();
      upper.pop();
      v[e] = '.';
      continue;
    }
    v.push_back(c);
    if ( islower(c) ) 
      lower.push(a++);
    else 
      upper.push(a++);
  }
  string out = "";
  for ( int i = 0; i < v.size(); i++ ) 
    if ( v[i] == '.' )
      continue;
    else
      out += v[i];
  /*
  for ( int i = 0; i < s.length(); i++ ) {
    if ( um.count(i) && um[i] == '.' ) 
      continue;
    else if ( um.count(i) ) 
      out += um[i];
    //out += um[i];
  }
    */
  return out;
}
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int t;
  cin >> t;
  while(t--) {
    string s;
    cin >> s;
    cout << func(s) << "\n";
  }
}
