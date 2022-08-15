#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

int main() {
  string word[4] = {"dream", "dreamer", "erase", "eraser"};
  rep(i, 4) { reverse(word[i].begin(), word[i].end()); }

  string s;
  cin >> s;

  reverse(s.begin(), s.end());
  bool result = true;

  for (int i = 0; i < s.size();) {
    bool isMatched = false;
    rep(j, 4) {
      string w = word[j];
      if (s.substr(i, w.size()) == w) {
        isMatched = true;
        i += w.size();
      }
    }
    if (!isMatched) {
      result = false;
      break;
    }
  }

  cout << (result ? "YES" : "NO") << endl;
}
