#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N, M;
  string S, T;
  cin >> N >> M >> S >> T;

  ll g = gcd(N, M);

  for (ll i = 0; i < g; i++) {
    if (S[i * N / g] != T[i * M / g]) {
      cout << -1 << endl;
      return 0;
    }
  }
  cout << lcm(N, M) << endl;
  return 0;
}
