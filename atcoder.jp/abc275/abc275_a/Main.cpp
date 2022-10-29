#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> H(N);
  for (auto &h : H) cin >> h;

  int ans = 0;
  int max = 0;
  rep(i, 0, N) {
    if (H[i] > max) {
      max = H[i];
      ans = i + 1;
    }
  }
  cout << ans << endl;
}
