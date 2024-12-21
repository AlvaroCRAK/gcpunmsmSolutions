#include <iostream>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  int c = 0;
  int max = n;
  while (n != 1) {
    if (n % 2 == 0)
      n /= 2;
    else
      n = 3 * n + 1;
    if (max < n)
      max = n;
    c++;
  }
  cout << c << " " << max;
}
