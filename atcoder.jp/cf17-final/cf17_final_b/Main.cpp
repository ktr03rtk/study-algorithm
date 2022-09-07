#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  map<char, int> m;
  for (auto s : S) m[s]++;

  bool ans = false;
  if (abs(m['a'] - m['b']) < 2 && abs(m['b'] - m['c']) < 2 &&
      abs(m['a'] - m['c']) < 2) {
    ans = true;
  }

  cout << (ans ? "YES" : "NO") << endl;
}
