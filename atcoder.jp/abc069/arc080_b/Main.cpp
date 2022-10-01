#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int H, W, N;
  cin >> H >> W >> N;
  vector<int> A;
  rep(i, 1, N + 1) {
    int a;
    cin >> a;
    rep(j, 0, a) { A.push_back(i); }
  }

  vector<vector<int>> B(H, vector<int>(W));
  int count = 0;
  rep(i, 0, H) {
    if (i % 2 == 0) {
      rep(j, 0, W) {
        B[i][j] = A[count];
        count++;
      }
    } else {
      for (int j = W - 1; j >= 0; j--) {
        B[i][j] = A[count];
        count++;
      }
    }
  }

  rep(i, 0, H) {
    rep(j, 0, W) { cout << B[i][j] << " "; }
    cout << endl;
  }
}
