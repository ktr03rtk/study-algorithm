#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  vector<ll> A(3), D(3);
  rep(i, 0, 3) {
    ll a;
    cin >> a;
    A[i] = a;
  }
  rep(i, 0, 3) {
    ll d;
    cin >> d;
    D[i] = d;
  }
  const ll val = 998244353;

  rep(i, 0, 3) {
    A[i] %= val;
    D[i] %= val;
  }
  ll ans = ((A[0] * A[1]) % val) * A[2] % val + val;
  ans -= ((D[0] * D[1]) % val) * D[2] % val;
  ans %= val;

  cout << ans << endl;
}
