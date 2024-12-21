#include <iostream>
#include <queue>
#include <vector>
using namespace std;
void func(vector<int> &v) {
  queue<int> q;
  q.push(v[0]);
  for (int i = 1; i < v.size(); i++) {
    if (v[i - 1] > v[i]) {
      q.push(v[i]);
      q.push(v[i]);
    } else
      q.push(v[i]);
  }
  cout << q.size() << endl;
  while (!q.empty()) {
    cout << q.front() << " ";
    q.pop();
  }
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
    for (int i = 0; i < n; i++)
      cin >> v[i];
    func(v);
    cout << endl;
  }
}
