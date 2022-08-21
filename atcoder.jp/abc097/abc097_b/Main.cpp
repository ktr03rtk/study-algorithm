#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int X;
  cin >> X;

  int ans = 1;
  rep(i, 2, X) {
    int val = i * i;
    while (val <= X) {
      ans = max(ans, val);
      val *= i;
    }
  }
  cout << ans << endl;
}
