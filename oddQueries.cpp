#include <iostream>
#include <vector>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int t;
  cin >> t;
  while (t--) {
    int n, q;
    cin >> n >> q;
    vector<long long> v(n+1);
    v[0] = 0;
    for ( int i = 1; i < v.size(); i++ ) {
      int j;
      cin >> j;
      v[i] = j+v[i-1];
    }
    while (q--) {
      int l, r, k;
      cin >> l >> r >> k;
      long long s = v[v.size()-1]+(long long)(r-l+1)*k-(v[r]-v[l-1]);
      if ( s%2 == 1 )
        cout << "YES";
      else 
        cout << "NO";
      cout << endl;

      //int out = v[r]-v[l-1];
      //cout << out << endl;
    }
  }
}
