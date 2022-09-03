#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int N = S.size();

  string ans = "NO";

  rep(i, 0, N) {
    rep(j, i, N) {
      if (S.substr(0, i) + S.substr(j, N - j) == "keyence") {
        ans = "YES";
      }
    }
  }

  cout << ans << endl;
}
