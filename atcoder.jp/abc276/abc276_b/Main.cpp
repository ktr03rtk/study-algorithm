#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  rep(i, 0, M) {
    int a, b;
    cin >> a >> b;
    A[i] = a;
    B[i] = b;
  }

  vector<vector<int>> V(N + 1);

  rep(i, 0, M) {
    V[A[i]].push_back(B[i]);
    V[B[i]].push_back(A[i]);
  }

  rep(i, 1, N + 1) { sort(V[i].begin(), V[i].end()); }

  rep(i, 1, N + 1) {
    if (V[i].size()) {
      cout << V[i].size();
      rep(j, 0, V[i].size()) { cout << " " << V[i][j]; }
      cout << endl;
    } else {
      cout << 0 << endl;
    }
  }
}
