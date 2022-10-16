#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N = 100000;
  vector<bool> prime(N + 1, true);
  prime[0] = false;
  prime[1] = false;
  for (int i = 2; i * i <= N; i++) {
    if (prime[i] == true) {
      for (int x = 2 * i; x <= N; x += i) prime[x] = false;
    }
  }

  vector<int> V(N + 1, 0);
  rep(i, 1, N) {
    if (i % 2 == 0) {
      V[i] = V[i - 1];
    } else {
      if (prime[i] && prime[(i + 1) / 2]) {
        V[i] = V[i - 1] + 1;
      } else {
        V[i] = V[i - 1];
      }
    }
  }

  int Q;
  cin >> Q;

  rep(i, 1, Q + 1) {
    int l, r;
    cin >> l >> r;

    cout << V[r] - V[l - 1] << endl;
  }

}
