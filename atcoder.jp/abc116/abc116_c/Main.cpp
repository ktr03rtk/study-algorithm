#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> H(N);
  for (auto &h : H) cin >> h;

  int ans = H[0];

  rep(i, 0, N - 1) {
    if (H[i] < H[i + 1]) {
      ans += H[i + 1] - H[i];
    }
  }

  cout << ans << endl;
}
