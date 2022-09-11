#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> A(N);
  for (auto &a : A) cin >> a;

  ll r = 0;
  ll l = 0;
  for (auto a : A) l += a;

  ll ans = LLONG_MAX;

  rep(i, 0, N - 1) {
    r += A[i];
    l -= A[i];

    ans = min(ans, abs(l - r));
  }

  cout << ans << endl;
}
