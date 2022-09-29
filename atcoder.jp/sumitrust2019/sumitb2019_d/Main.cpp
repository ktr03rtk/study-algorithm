#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  int ans = 0;

  rep(i, 0, 1000) {
    string ss = to_string(i);
    while (ss.size() < 3) {
      ss = '0' + ss;
    }

    int count = 0;
    rep(j, 0, N) {
      if (count == 3) break;
      if (S[j] == ss[count]) count++;
    }
    if (count == 3) ans++;
  }

  cout << ans << endl;
}
