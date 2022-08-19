#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S, T;
  cin >> S >> T;

  bool ans = false;
  rep(i, 0, S.size()) {
    string s = S.substr(i, S.size() - i) + S.substr(0, i);
    if (s == T) { ans = true; }
  }

  cout << (ans ? "Yes" : "No") << endl;
}
