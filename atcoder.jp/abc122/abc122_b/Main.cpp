#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int ans = 0;

  rep(i, 0, S.size()) {
    rep(j, 0, S.size()) {
      bool passed = true;
      string s = S.substr(i, S.size() - j);

      rep(k, 0, s.size()) {
        if (s[k] != 'A' && s[k] != 'C' && s[k] != 'G' && s[k] != 'T') {
          passed = false;
        }
      }

      if (passed) {
        if (s.size() > ans) {
          ans = s.size();
        }
      }
    }
  }

  cout << ans << endl;
}
