#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

int main() {
  int N;
  cin >> N;

  vector<vector<ll>> V(10, vector<ll>(10, 0));

  rep(i, 1, N + 1) {
    vector<int> d;
    int ii = i;
    while (ii) {
      d.push_back(ii % 10);
      ii /= 10;
    }
    int a = d[0];
    int b = d.back();
    if (b == 0) continue;
    V[a][b]++;
  }

  ll ans = 0;
  rep(i, 1, 10) {
    rep(j, 1, 10) { ans += V[i][j] * V[j][i]; }
  }
  cout << ans << endl;
}
