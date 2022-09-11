#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> S(N);
  for (auto &s : S) cin >> s;

  vector<ll> A(5);

  for (auto s : S) {
    if (s[0] == 'M')
      A[0]++;
    else if (s[0] == 'A')
      A[1]++;
    else if (s[0] == 'R')
      A[2]++;
    else if (s[0] == 'C')
      A[3]++;
    else if (s[0] == 'H')
      A[4]++;
  }

  ll ans = 0;

  rep(i, 0, 3) {
    rep(j, i + 1, 4) {
      rep(k, j + 1, 5) { ans += A[i] * A[j] * A[k]; }
    }
  }

  cout << ans << endl;
}
