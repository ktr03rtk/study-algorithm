#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

int main() {
  int N;
  cin >> N;
  vector<int> A(N + 1, 0);
  rep(i, 1, N + 1) { cin >> A[i]; }

  vector<int> B(2 * N + 2, 0);

  rep(i, 1, N + 1) {
    int b = B[A[i]] + 1;
    B[2 * i] = b;
    B[2 * i + 1] = b;
  }

  rep(i, 1, 2 * N + 2) { cout << B[i] << endl; }
}
