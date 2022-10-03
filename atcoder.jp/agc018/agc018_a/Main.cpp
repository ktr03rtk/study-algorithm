#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (auto &a : A) cin >> a;
  sort(A.begin(), A.end());

  if (A[A.size() - 1] < K) {
    cout << "IMPOSSIBLE" << endl;
    return 0;
  }

  int val = 0;
  rep(i, 0, N) { val = gcd(val, A[i]); }
  if (K % val == 0) {
    cout << "POSSIBLE" << endl;
  } else {
    cout << "IMPOSSIBLE" << endl;
  }
}
