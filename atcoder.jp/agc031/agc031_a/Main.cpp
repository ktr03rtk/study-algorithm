#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N;
  string S;
  cin >> N >> S;

  map<char, ll> m;
  for (auto s : S) {
    m[s]++;
  }

  ll ans = 1;
  for (auto mm : m) {
    ans *= (mm.second + 1);
    ans %= 1000000007;
  }

  cout << ans - 1 << endl;
}
