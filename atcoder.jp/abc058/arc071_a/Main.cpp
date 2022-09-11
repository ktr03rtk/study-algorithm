#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<map<char, int>> m(N);
  rep(i, 0, N) {
    string s;
    cin >> s;
    rep(j, 0, s.size()) { m[i][s[j]]++; }
  }

  map<char, int> ans;
  rep(i, 0, 26) {
    int mi = 1000000000;
    char c = 'a' + i;
    rep(j, 0, N) {
      mi = min(mi, m[j][c]);
    }
    ans[c] = mi;
  }

  rep(i, 0, 26) {
    char c = 'a' + i;
    int count = ans[c];
    rep(i, 0, count) { cout << c; }
  }
  cout << endl;
}
