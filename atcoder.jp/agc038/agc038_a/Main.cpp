#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int H, W, A, B;
  cin >> H >> W >> A >> B;
  rep(i, 0, H) {
    rep(j, 0, W) {
      if (i < B && j < A) {
        cout << 0;
      } else if (i >= B && j >= A) {
        cout << 0;
      } else {
        cout << 1;
      }
    }
    cout << endl;
  }
}
