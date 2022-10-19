#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

int main() {
  ll X, Y, A, B, C;
  cin >> X >> Y >> A >> B >> C;
  vector<ll> P(A), Q(B), R(C), S;
  for (auto &p : P) cin >> p;
  for (auto &q : Q) cin >> q;
  for (auto &r : R) cin >> r;
  sort(P.begin(), P.end(), greater<int>{});
  sort(Q.begin(), Q.end(), greater<int>{});
  sort(R.begin(), R.end(), greater<int>{});

  rep(i, 0, X) { S.push_back(P[i]); }
  rep(i, 0, Y) { S.push_back(Q[i]); }

  sort(S.begin(), S.end());

  int N = min((int)S.size(), (int)C);

  rep(i, 0, N) {
    if (R[i] >= S[i]) {
      S[i] = R[i];
    } else {
      break;
    }
  }

  ll ans = 0;
  for (auto s : S) {
    ans += s;
  }
  cout << ans << endl;
}
