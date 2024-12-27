#include <iostream>
#include <vector>
using namespace std;
vector<int> func(vector<int> v, int n) {
  int l = 0;
  int r = n-1;
  bool temp1, temp2;
  int min = 1;
  int max = n;
  while (true) {
    if ( (r-l+1) < 4 ) 
      return vector<int>{-1};
    if ( v[l] == min ) {
      min++;
      l++;
      continue;
    }
    if ( v[l] == max ) {
      max--;
      l++;
      continue;
    }
    if ( v[r] == min ) {
      min++;
      r--;
      continue;
    }
    if ( v[r] == max ) {
      max--;
      r--;
      continue;
    }
    break;
  }
  return vector<int>{++l, ++r};
}
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for ( int i = 0; i < n; i++ ) 
      cin >> v[i];
    vector<int> out = func(v, n);
    if ( out.size() == 1 ) 
      cout << -1 << "\n";
    else 
      cout << out[0] << " " << out[1] << "\n";
  }
}
