#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<ll> A(N);
  for (auto &a : A) cin >> a;
  sort(A.begin(), A.end(), greater<ll>{});

  ll ans = 0;
  if (N % 2 == 0) {
    rep(i, 0, N / 2 - 1) ans += A[i] * 2;
    ans += A[N / 2 - 1];
    ans -= A[N / 2];
    rep(i, N / 2 + 1, N) ans -= A[i] * 2;

  } else {
    ll ans1 = 0;
    rep(i, 0, N / 2 - 1) ans1 += A[i] * 2;
    ans1 += A[N / 2 - 1] + A[N / 2];
    rep(i, N / 2 + 1, N) ans1 -= A[i] * 2;

    ll ans2 = 0;
    rep(i, 0, N / 2) ans2 += A[i] * 2;
    ans2 -= A[N / 2] + A[N / 2 + 1];
    rep(i, N / 2 + 2, N) ans2 -= A[i] * 2;

    ans = max(ans1, ans2);
  }
  cout << ans << endl;
}
