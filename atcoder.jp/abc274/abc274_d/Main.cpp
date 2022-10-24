#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

int main() {
  int N, X, Y;
  cin >> N >> X >> Y;
  vector<int> A(N);
  for (auto &a : A) cin >> a;

  const int M = 10000;

  // 負の添字をもつ配列
  bool list1[2 * M + 1], list2[2 * M + 1], list3[2 * M + 1];
  bool *dp1 = list1 + M;
  bool *dp2 = list2 + M;
  bool *dp3 = list3 + M;
  dp1[A[0]] = dp2[0] = true;
  rep(i, 1, N) {
    rep(j, -M, M + 1) dp3[j] = false;
    int a = A[i];
    if (i % 2 == 0) {
      rep(j, -M, M - a) {
        dp3[j + a] |= dp1[j];
        dp3[j] |= dp1[j + a];
      }
      swap(dp1, dp3);
    } else {
      rep(j, -M, M - a) {
        dp3[j + a] |= dp2[j];
        dp3[j] |= dp2[j + a];
      }
      swap(dp2, dp3);
    }
  }

  cout << (dp1[X] && dp2[Y] ? "Yes" : "No") << endl;
}
