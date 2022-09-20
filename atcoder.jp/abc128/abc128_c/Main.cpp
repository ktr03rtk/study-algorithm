#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> S(M);
  rep(i, 0, M) {
    int k;
    cin >> k;
    rep(j, 0, k) {
      int s;
      cin >> s;
      s--;
      S[i].push_back(s);
    }
  }

  vector<int> P(M);
  for (auto &p : P) cin >> p;

  int ans = 0;
  rep(i, 0, 1 << N) {
    bool pass = true;
    rep(j, 0, M) {
      int count = 0;
      for (auto s : S[j]) {
        if (i & (1 << s)) {
          count++;
        }
      }
      if (count % 2 != P[j]) pass = false;
    }
    if (pass) ans++;
  }

  cout << ans << endl;
}
