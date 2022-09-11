#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, A, B, C, D;
  cin >> N >> A >> B >> C >> D;

  string S;
  cin >> S;

  rep(i, A, C) {
    if (S[i - 1] == '#' && S[i] == '#') {
      cout << "No" << endl;
      return 0;
    }
  }

  rep(i, B, D) {
    if (S[i - 1] == '#' && S[i] == '#') {
      cout << "No" << endl;
      return 0;
    }
  }

  int count = 0;
  if (C > D) {
    bool pass = false;
    rep(i, B, D + 1) {
      if (S[i - 2] == '.' && S[i - 1] == '.' && S[i] == '.') {
        pass = true;
      }
    }

    cout << (pass ? "Yes" : "No") << endl;
    return 0;
  }

  cout << "Yes" << endl;
}
