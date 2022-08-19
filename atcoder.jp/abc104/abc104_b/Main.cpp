#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  bool ans = true;

  if (S[0] != 'A') {
    ans = false;
  }

  if (isupper(S[1]) || isupper(S[S.size() - 1])) {
    ans = false;
  }

  int count = 0;
  rep(i, 2, S.size() - 1) {
    if (S[i] == 'C') {
      count++;
    } else if (isupper(S[i])) {
      ans = false;
    }
  }

  if (count != 1) {
    ans = false;
  }

  cout << (ans ? "AC" : "WA") << endl;
}
