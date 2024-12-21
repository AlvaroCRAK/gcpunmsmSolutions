#include <iostream>
#include <vector>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int r, c;
  cin >> r >> c;
  vector<vector<int>> vv(r, vector<int>(c));
  int num = 1;
  int temp, temp2;
  temp = temp2 = c;
  for (int i = 0; i < r; i++) {
    if (i % 2 == 0)
      for (int j = 0; j < c; j++) {
        cout << num++ << " ";
      }
    else {
      int temp = num - 1 + c;
      for (int j = 0; j < c; j++) {
        cout << temp-- << " ";
      }
      num += c;
    }
    cout << endl;
  }
}
