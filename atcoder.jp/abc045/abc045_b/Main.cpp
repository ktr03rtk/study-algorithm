#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  map<char, queue<char>> m;
  vector<char> list = {'a', 'b', 'c'};
  rep(i, 0, list.size()) {
    string s;
    cin >> s;

    rep(j, 0, s.size()) { m[list[i]].push(s[j]); }
  }

  char turn = 'a';
  char ans = ' ';
  while (true) {
    char current = turn;
    if (m[current].size() == 0) {
      ans = current;
      break;
    }

    turn = m[current].front();
    m[current].pop();
  }

  cout << (char)toupper(ans) << endl;
}
