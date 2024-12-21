#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  string s;
  cin >> n >> s;
  int temp = 0;
  for (int i = 0; i < n; i = i + temp) {
    cout << s[i];
    temp++;
  }
}
