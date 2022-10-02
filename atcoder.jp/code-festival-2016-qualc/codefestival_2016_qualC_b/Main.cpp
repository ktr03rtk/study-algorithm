#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int K, T;
  cin >> K >> T;
  vector<int> A(T);
  for (auto &a : A) cin >> a;
  sort(A.begin(), A.end());

  int ans = 0;
  if (A[T - 1] - (K - A[T - 1]) > 1) {
    ans = A[T - 1] - (K - A[T - 1]) - 1;
  }
  cout << ans << endl;
}
