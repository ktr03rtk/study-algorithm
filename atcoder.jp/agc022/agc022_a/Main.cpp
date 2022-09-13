#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;
  int N = 26;

  vector<int> A(N, 0);

  for (auto s : S) {
    A[int(s - 'a')]++;
  }

  bool pass = false;
  char ans;
  rep(i, 0, N) {
    if (A[i] == 0) {
      ans = 'a' + i;
      pass = true;
      break;
    }
  }

  if (pass) {
    cout << S << ans << endl;
    return 0;
  }

  string T = S;
  if (next_permutation(T.begin(), T.end())) {
    rep(i, 0, N) {
      if (S[i] != T[i]) {
        cout << T[i];
        return 0;
      }
      cout << T[i];
    }
  } else {
    cout << -1 << endl;
  }
}
