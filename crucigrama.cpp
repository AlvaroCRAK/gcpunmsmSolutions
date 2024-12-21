#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  string m, n;
  cin >> n >> m;
  int x, y;
  bool temp = false;
  for (int i = 0; i < n.length(); i++) {
    for (int j = 0; j < m.length(); j++)
      if (n[i] == m[j]) {
        x = i;
        y = j;
        temp = true;
        break;
      }
    if (temp)
      break;
  }

  // cout << x << " " << y << endl;
  for (int i = 0; i < m.length(); i++) {
    for (int j = 0; j < n.length(); j++) {
      if (y == i)
        cout << n[j];
      else if (x == j)
        cout << m[i];
      else
        cout << ".";
    }
    cout << endl;
  }
}
