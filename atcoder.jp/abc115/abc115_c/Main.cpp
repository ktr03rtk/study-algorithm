#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> h(N);
  for (auto &hh : h) {
    cin >> hh;
  }

  sort(h.begin(), h.end());

  int ans = 1000000000;

  rep(i, 0, N - K + 1) {
    int val = abs(h[i] - h[i + K - 1]);
    ans = min(ans, val);
  }

  cout << ans << endl;
}
