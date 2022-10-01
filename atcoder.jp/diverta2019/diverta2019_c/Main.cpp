#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  for (auto &s : S) cin >> s;

  int ab = 0;
  int ba = 0;
  int a = 0;
  int b = 0;

  for (auto s : S) {
    rep(i, 0, s.size() - 1) {
      if (s[i] == 'A' && s[i + 1] == 'B') ab++;
    }

    if (s[0] == 'B' && s[s.size() - 1] == 'A') {
      ba++;
    } else if (s[0] == 'B') {
      b++;
    } else if (s[s.size() - 1] == 'A') {
      a++;
    }
  }

  int ans = ab;
  if (ba == 0) {
    ans += min(a, b);
  } else if (a + b > 0) {
    ans += ba + min(a, b);
  } else {
    ans += ba - 1;
  }

  cout << ans << endl;
}
