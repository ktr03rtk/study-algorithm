#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

int main() {
  string S;
  cin >> S;

  vector<string> V;

  string SS;
  rep(i, 0, S.size()) {
    if (S[i] == 'A') {
      SS += 'A';
    } else if (S[i] == 'B' && S[i + 1] == 'C') {
      SS += 'D';
      i++;

    } else {
      if (SS.size() > 0) {
        V.push_back(SS);
        SS.clear();
      }
    }
  }
  if (SS.size() > 0) V.push_back(SS);

  ll ans = 0;

  rep(i, 0, V.size()) {
    ll a = 0;
    rep(j, 0, V[i].size()) {
      if (V[i][j] == 'A') {
        a++;
      } else if (V[i][j] == 'D') {
        ans += a;
      }
    }
  }

  cout << ans << endl;
}
