#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<ll> A(N);
  for (auto &a : A) cin >> a;

  ll B1 = A[0];
  ll B2 = 0;
  rep(i, 1, N) B2 += A[i];

  ll ans = B2 - B1;

  rep(i, 1, N) {
    B1 += A[i];
    B2 -= A[i];
    ans = min(ans, abs(B2 - B1));
  }

  cout << ans << endl;
}
