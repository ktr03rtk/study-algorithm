#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<ll> A(N), B(N);
  for (auto &a : A) cin >> a;

  B[0] = 0;
  rep(i, 0, N) {
    if (i % 2 == 0) {
      B[0] += A[i];
    } else {
      B[0] -= A[i];
    }
  }
  rep(i, 1, N) { B[i] = 2 * A[i - 1] - B[i - 1]; }

  rep(i, 0, N) {
    if (i) cout << " ";
    cout << B[i];
  }
  cout << endl;
}
