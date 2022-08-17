#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, K, Q;
  cin >> N >> K >> Q;

  vector<int> A(Q);
  for (auto &a : A) cin >> a;

  vector<int> result(N, K - Q);
  rep(i, 0, Q) { result[(A[i] - 1)]++; }

  rep(i, 0, N) { cout << (result[i] > 0 ? "Yes" : "No") << endl; }
}
