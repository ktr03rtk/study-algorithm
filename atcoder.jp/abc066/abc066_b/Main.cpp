#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;
  int N = S.size();

  int ans = 0;

  rep(i, 1, N / 2) {
    if (S.substr(0, i) == S.substr(i, i)) {
      ans = max(ans, i * 2);
    }
  }

  cout << ans << endl;
}
