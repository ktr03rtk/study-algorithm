#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N, K, S;
  cin >> N >> K >> S;

  rep(i, 0, K) { cout << S << " "; }
  if (S == 1e9) {
    rep(i, 0, N - K) { cout << 1 << " "; }

  } else {
    rep(i, 0, N - K) { cout << S + 1 << " "; }
  }
  cout << endl;
}
