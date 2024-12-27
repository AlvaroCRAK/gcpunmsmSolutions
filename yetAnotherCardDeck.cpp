#include <iostream>
#include <vector>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<int> pos(50);
  vector<bool> temp(50, true);
  vector<int> con(q);
  vector<int> sum(q);
  for ( int i = 0; i < n; i++ ) {
    int k;
    cin >> k;
    k--;
    if ( temp[k] ) {
      temp[k] = false;
      pos[k] = i;
    }
  }
  for ( int i = 0; i < q; i++ ) {
    int k;
    cin >> k;
    k--;
    con[i] = k;
  }

  /*
  for ( int i = 0; i < 50; i++ ) 
    cout << pos[i] << " ";
  cout << endl;
  */

  for ( int i = 0; i < q; i++ ) {
    int num = con[i];
    int position = pos[num];
    //cout << num;
    //cout << pos[num];
    for ( int j = 0; j < 50; j++ ) 
      if ( pos[j] <= position )
        pos[j]++;

    cout << pos[num] << " ";
    pos[num] = 0;
  }
}
