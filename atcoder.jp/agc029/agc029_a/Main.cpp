#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  ll ans = 0;
  ll black = 0;

  rep(i, 0, S.size()) {
    if (S[i] == 'W') {
      ans += black;
    } else {
      black++;
    }
  }

  cout << ans << endl;
}
