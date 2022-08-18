#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int A, B;
  cin >> A >> B;

  int ans = 0;

  rep(i, 0, B - A + 1) {
    bool isTarget = true;
    string s = to_string(A + i);

    rep(j, 0, s.size() / 2 + 1) {
      if (s[j] != s[s.size() - 1 - j]) {
        isTarget = false;
      }
    }

    if (isTarget) {
      ans++;
    }
  }

  cout << ans << endl;
}
