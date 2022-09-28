#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N, M;
  cin >> N >> M;

  map<ll, ll> m;
  vector<ll> A(N), B(M), C(M);
  for (auto &a : A) cin >> a;
  sort(A.begin(), A.end());
  rep(i, 0, M) { cin >> B[i] >> C[i]; }

  vector<int> id(M);
  iota(id.begin(), id.end(), 0);
  sort(id.begin(), id.end(), [&](int i, int j) { return C[i] > C[j]; });

  ll ans = 0;
  ll K = 0;
  for (auto i : id) {
    rep(j, 0, B[i]) {
      if (K >= N) break;
      {
        ans += max(A[K], C[i]);
        K++;
      }
    }
  }
  rep(i, K, N) { ans += A[i]; }

  cout << ans << endl;
}
