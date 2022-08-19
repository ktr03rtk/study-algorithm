#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;

  int r, l;

  rep(i, 0, s.size()) {
    if (s[i] == 'A') {
      r = i;
      break;
    }
  }

  rep(i, 0, s.size()) {
    if (s[s.size() - i] == 'Z') {
      l = s.size() - i;
      break;
    }
  }

  cout << l - r + 1 << endl;
}
