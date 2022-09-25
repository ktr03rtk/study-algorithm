#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (auto &a : A) cin >> a;

  vector<pair<ll, ll>> B(N, {0, 0});
  rep(i, 0, N) {
    rep(j, 0, N) {
      if (A[i] > A[j]) {
        B[i].second++;
        if (i < j) {
          B[i].first++;
        }
      }
    }
  }

  pair<ll, ll> C;
  rep(i, 0, N) {
    C.first += B[i].first;
    C.second += B[i].second;
  }

  ll ans = 0;
  ans = C.first * K % 1000000007;
  ans =
      (ans + K * (K - 1) / 2 % 1000000007 * C.second % 1000000007) % 1000000007;

  cout << ans << endl;
}
