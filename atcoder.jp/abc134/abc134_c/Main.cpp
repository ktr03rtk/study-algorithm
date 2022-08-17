#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (auto &a : A) cin >> a;

  vector<int> L(N);
  rep(i, 0, N) L[i] = A[i];
  rep(i, 1, N) L[i] = max(L[i], L[i - 1]);

  vector<int> R(N);
  rep(i, 0, N) R[i] = A[i];
  for (int i = N - 2; i >= 0; i--) {
    R[i] = max(R[i], R[i + 1]);
  }

  rep(i, 0, N) {
    int ans = -1;
    if (0 < i) ans = max(ans, L[i - 1]);
    if (i + 1 < N) ans = max(ans, R[i + 1]);
    cout << ans << endl;
  }
}
