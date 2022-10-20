#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

int main() {
  ll N;
  cin >> N;

  ll ans = 0;
  for (ll i = 1; i * i <= N; i++) {
    if ((N - i) % i == 0 && (N - i) / i > i) {
      ll val = (N - i) / i;
      ans += (N - i) / i;
    }
  }

  cout << ans << endl;
}
