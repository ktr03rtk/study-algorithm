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
  int count = 0;

  rep(i, 0, N - 1) {
    if (H[i] >= H[i + 1]) {
      count++;
      if (count > ans) {
        ans = count;
      }

    } else {
      count = 0;
    }
  }

  cout << ans << endl;
}
