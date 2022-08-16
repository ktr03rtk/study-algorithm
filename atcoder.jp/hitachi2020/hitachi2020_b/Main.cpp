#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  const int INF = 1000000;
  int A, B, M;
  cin >> A >> B >> M;

  vector<int> a(A);
  vector<int> b(B);
  rep(i, 0, A) { cin >> a[i]; }
  rep(i, 0, B) { cin >> b[i]; }

  vector<vector<int>> m(M, vector<int>(3));
  rep(i, 0, M) {
    rep(j, 0, 3) { cin >> m[i][j]; }
  }

  int def_a_min = *min_element(a.begin(), a.end());
  int def_b_min = *min_element(b.begin(), b.end());

  int ans = def_a_min + def_b_min;

  rep(i, 0, M) { ans = min(ans, a[m[i][0] - 1] + b[m[i][1] - 1] - m[i][2]); }

  cout << ans << endl;
}
