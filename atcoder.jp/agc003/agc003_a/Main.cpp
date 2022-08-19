#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  vector<char> V{'N', 'S', 'W', 'E'};
  map<char, bool> m;

  for (auto v : V) {
    m.insert(make_pair(v, false));
  }

  rep(i, 0, S.size()) { m[S[i]] = true; }

  bool ans = true;
  if (m['N'] != m['S']) ans = false;
  if (m['W'] != m['E']) ans = false;

  cout << (ans ? "Yes" : "No") << endl;
}
