#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;

  vector<int> r(N, 0);
  vector<int> l(N, 0);

  rep(i, 1, N) {
    if (S[i - 1] == 'W') {
      r[i] = r[i - 1] + 1;
    } else {
      r[i] = r[i - 1];
    }
  }

  for (int i = N - 2; i >= 0; i--) {
    if (S[i + 1] == 'E') {
      l[i] = l[i + 1] + 1;
    } else {
      l[i] = l[i + 1];
    }
  }

  int ans = 1000000000;
  rep(i, 0, N) { ans = min(ans, l[i] + r[i]); }

  cout << ans << endl;
}
