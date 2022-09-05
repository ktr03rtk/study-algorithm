#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N, M;
  cin >> N >> M;

  if (N == 1 && M == 1) {
    cout << 1 << endl;
    return 0;
  }

  if (N == 1 || M == 1) {
    cout << max((ll)0, max(N, M) - 2) << endl;
    return 0;
  }

  if (N == 2 || M == 2) {
    cout << 0 << endl;
    return 0;
  }

  cout << (N - 2) * (M - 2) << endl;
}
