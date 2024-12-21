#include <iostream>
#include <vector>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<vector<int>> vv(n, vector<int>(n));
  for (int i = 0; i < vv.size(); i++)
    for (int j = 0; j < vv[0].size(); j++)
      cin >> vv[i][j];
  bool temp = true;

  for (int i = 0; i < vv.size(); i++)
    if (vv[i][i] != vv[i][vv.size() - 1 - i]) {
      temp = false;
      break;
    }
  if (temp)
    cout << "Iguales";
  else
    cout << "No Iguales";
}
