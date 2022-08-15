#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

int main() {
  int n, m, c;
  cin >> n >> m >> c;

  vector<int> b(m);
  rep(i, m) { cin >> b[i]; }

  vector<vector<int>> a(n, vector<int>(m));
  rep(i, n) {
    rep(j, m) { cin >> a[i][j]; }
  }

  int result = 0;

  rep(i, n) {
    int sum = c;
    rep(j, m) { sum += a[i][j] * b[j]; }

    if (sum > 0) {
      result++;
    }
  }

  cout << result << endl;
}
