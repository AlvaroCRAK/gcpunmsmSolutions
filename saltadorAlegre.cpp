#include <iostream>
#include <vector>
using namespace std;
string func(vector<int> &v) {
  bool b[v.size() - 1] = {false};
  for (int i = 1; i < v.size(); i++) {
    int k = abs(v[i] - v[i - 1]) - 1;
    b[k] = true;
  }
  for (int i = 0; i < v.size() - 1; i++)
    if (b[i] == false)
      return "No alegre";
  return "Alegre";
}
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int t;
  cin >> t;
  int n;
  while (t--) {
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];
    cout << func(v) << endl;
  }
}
