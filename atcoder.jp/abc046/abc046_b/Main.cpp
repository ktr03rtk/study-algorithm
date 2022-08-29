#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  int ans = 0;
  if (N == 1) {
    ans = K;

  } else {
    ans = K * pow(K - 1, N - 1);
  }

  cout << ans << endl;
}
