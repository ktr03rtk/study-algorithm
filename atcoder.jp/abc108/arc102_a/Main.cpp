#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N, K;
  cin >> N >> K;

  ll a = N / K;
  ll ans = a * a * a;

  if (K % 2 == 0) {
    ll b = N / (K / 2) - a;
    ans += b * b * b;
  }

  cout << ans << endl;
}
