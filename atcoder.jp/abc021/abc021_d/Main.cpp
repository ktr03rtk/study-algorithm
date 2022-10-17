#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

ll f[1000000];
ll rf[1000000];
ll mod = 1000000007;

// フェルマーの小定理(逆数算出)
ll inv(ll x) {
  ll res = 1;
  ll k = mod - 2;
  ll y = x;
  // 繰り返し二乗法
  while (k) {
    if (k & 1) res = (res * y) % mod;
    y = (y * y) % mod;
    k /= 2;
  }
  return res;
}

void init() {
  f[0] = 1;
  rep(i, 1, 1000000) f[i] = (f[i - 1] * i) % mod;
  rep(i, 0, 1000000) rf[i] = inv(f[i]);
}

// 二項係数
ll C(int n, int k) {
  ll a = f[n];
  ll b = rf[n - k];
  ll c = rf[k];

  ll bc = (b * c) % mod;

  return (a * bc) % mod;
}

int main() {
  int N, K;
  cin >> N >> K;
  init();

  // 重複組合せ
  ll ans = C(N - 1 + K, N - 1);

  cout << ans << endl;
}
