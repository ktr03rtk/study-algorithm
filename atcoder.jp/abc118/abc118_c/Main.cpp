#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int GCD(int A, int B) {
  while (A >= 1 && B >= 1) {
    if (A < B) {
      B = B % A;
    } else {
      A = A % B;
    }
  }
  if (A >= 1) return A;
  return B;
}

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (auto &a : A) cin >> a;

  int ans = 0;
  rep(i, 0, N) { ans = GCD(ans, A[i]); }

  cout << ans << endl;
}
