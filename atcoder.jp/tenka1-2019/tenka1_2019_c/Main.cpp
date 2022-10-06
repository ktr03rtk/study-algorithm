#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;

  vector<int> sumw(N + 1, 0), sumb(N + 1, 0);
  rep(i, 0, N) {
    if (S[i] == '.') {
      sumw[i + 1] = sumw[i] + 1;
      sumb[i + 1] = sumb[i];
    } else {
      sumw[i + 1] = sumw[i];
      sumb[i + 1] = sumb[i] + 1;
    }
  }

  int ans = 1000000000;
  rep(i, 0, N + 1) {
    int tmp = sumb[i] - sumb[0];
    tmp += sumw[N] - sumw[i];
    ans = min(ans, tmp);
  }
  cout << ans << endl;
}
