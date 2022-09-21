#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N;
  ll K;
  cin >> N >> K;
  vector<ll> C(100001, 0);
  rep(i, 0, N) {
    ll a, b;
    cin >> a >> b;
    C[a] += b;
  }

  ll count = 0;
  ll ans = 0;
  rep(i, 1, C.size()) {
    count += C[i];
    if (count >= K) {
      ans = i;
      break;
    }
  }

  cout << ans << endl;
}
