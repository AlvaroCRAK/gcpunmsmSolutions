#include <iostream>
#include <vector>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int m, n;
  cin >> m >> n;
  vector<vector<int>> vv(m, vector<int>(n));
  for (int i = 0; i < vv.size(); i++)
    for (int j = 0; j < vv[i].size(); j++)
      cin >> vv[i][j];
  vector<vector<int>> out(m, vector<int>(n, 0));

  for (int i = 0; i < vv.size(); i++)
    for (int j = 0; j < vv[i].size(); j++) {
      if (vv[i][j] == 1) {
        out[i][j] = 9;
        continue;
      }
      int p = 0;
      for (int k = -1; k < 2; k++)
        for (int l = -1; l < 2; l++) {
          if (k + i >= 0 && k + i < vv.size() && j + l >= 0 &&
              j + l < vv[0].size())
            p += vv[i + k][j + l];
        }
      out[i][j] += p;
    }
  for (int i = 0; i < out.size(); i++) {
    for (int j = 0; j < out[0].size(); j++)
      cout << out[i][j] << " ";
    cout << endl;
  }
}
