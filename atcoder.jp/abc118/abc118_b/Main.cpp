#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> K(N);
  vector<vector<int>> P(N);
  rep(i, 0, N) {
    cin >> K[i];
    rep(j, 0, K[i]) {
      int val;
      cin >> val;
      P[i].push_back(val);
    }
  }

  int ans = 0;

  rep(i, 1, M + 1) {
    bool isContained = true;
    rep(j, 0, N) {
      auto itr = find(P[j].begin(), P[j].end(), i);
      if (itr == P[j].end()) {
        isContained = false;
        break;
      }
    }

    if (isContained) {
      ans++;
    }
  }

  cout << ans << endl;
}
