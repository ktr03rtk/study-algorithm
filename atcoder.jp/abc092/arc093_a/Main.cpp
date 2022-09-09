#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N + 2);
  A[0] = 0;
  A[N + 1] = 0;
  int val = 0;
  rep(i, 1, N + 2) {
    cin >> A[i];
    val += abs(A[i] - A[i - 1]);
  }

  vector<int> B(N + 2);
  B[0] = 0;
  B[N + 1] = 0;
  rep(i, 1, N + 1) {
    B[i] = val - abs(A[i - 1] - A[i]) - abs(A[i] - A[i + 1]) +
           abs(A[i + 1] - A[i - 1]);
  }

  rep(i, 1, N + 1) { cout << B[i] << endl; }
}
