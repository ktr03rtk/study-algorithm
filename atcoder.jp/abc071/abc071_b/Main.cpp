#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  const int WORD_NUM = 26;
  string S;
  cin >> S;

  string ans = "None";

  char c = 'a';

  rep(i, 0, WORD_NUM) {
    if (S.find(c) == string::npos) {
      ans = c;
      break;
    }
    c++;
  }

  cout << ans << endl;
}
