#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<vector<int>> A(N, vector<int>(2));
  vector<vector<int>> C(M, vector<int>(2));
  for (auto &a : A) cin >> a[0] >> a[1];
  for (auto &c : C) cin >> c[0] >> c[1];

  vector<int> B(N);

  rep(i, 0, N) {
    int dist = 1000000000;
    rep(j, 0, M) {
      int current = (abs(A[i][0] - C[j][0]) + abs(A[i][1] - C[j][1]));
      if (current < dist) {
        dist = current;
        B[i] = j + 1;
      }
    }
  }

  for (auto b : B) {
    cout << b << endl;
  }
}
