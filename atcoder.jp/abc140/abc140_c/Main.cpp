#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  vector<int> B(N - 1);
  for (auto &b : B) {
    cin >> b;
  }

  A[0] = B[0];
  int ans = A[0];

  rep(i, 1, N - 1) {
    A[i] = min(B[i], B[i - 1]);
    ans += A[i];
  }

  A[N-1] = B[N - 2];
  ans += A[N-1];

  cout << ans << endl;
}
