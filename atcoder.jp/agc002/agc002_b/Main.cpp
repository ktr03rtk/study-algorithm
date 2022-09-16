#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> X(M + 1, 0);
  vector<int> Y(M + 1, 0);
  rep(i, 1, M + 1) { cin >> X[i] >> Y[i]; }

  vector<int> A(N + 1, 1);
  vector<int> B(N + 1, 0);
  B[1] = 1;
  rep(i, 1, M + 1) {
    if (B[X[i]] == 1) B[Y[i]] = 1;

    A[X[i]]--;
    A[Y[i]]++;

    if (A[X[i]] == 0) B[X[i]] = 0;
  }

  int ans = 0;
  rep(i, 1, N + 1) {
    if (A[i] > 0 && B[i] == 1) {
      ans++;
    }
  }

  cout << ans << endl;
}
