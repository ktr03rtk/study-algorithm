#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, K, R, S, P;
  cin >> N >> K >> R >> S >> P;

  string s;
  cin >> s;

  int ans = 0;
  vector<int> vr(N, 0);
  vector<int> vs(N, 0);
  vector<int> vp(N, 0);

  rep(i, 0, N) {
    if (s[i] == 'r') {
      if (i - K < 0 || i - K >= 0 && vp[i - K] != 1) {
        ans += P;
        vp[i] = 1;
      }
    } else if (s[i] == 's') {
      if (i - K < 0 || i - K >= 0 && vr[i - K] != 1) {
        ans += R;
        vr[i] = 1;
      }
    } else if (s[i] == 'p') {
      if (i - K < 0 || i - K >= 0 && vs[i - K] != 1) {
        ans += S;
        vs[i] = 1;
      }
    }
  }

  cout << ans << endl;
}
