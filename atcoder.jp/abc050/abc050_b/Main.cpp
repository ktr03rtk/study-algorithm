#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> T(N);
  for (auto &t : T) cin >> t;

  int M;
  cin >> M;

  vector<int> P(M);
  vector<int> X(M);
  rep(i, 0, M) {
    cin >> P[i];
    cin >> X[i];
  }

  int sum = 0;
  for (auto t : T) sum += t;

  int ans = 0;
  rep(i, 0, M) {
    ans = sum - T[P[i] - 1] + X[i];
    cout << ans << endl;
  }
}
