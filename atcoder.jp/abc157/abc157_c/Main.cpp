#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> S(M);
  vector<int> C(M);

  rep(i, 0, M) cin >> S[i] >> C[i], S[i]--;

  rep(i, 0, 1000) {
    string s = to_string(i);
    if ((int)s.size() != N) continue;

    bool pass = true;

    rep(i, 0, M) {
      rep(j, 0, N) {
        if (j == S[i] && (s[j] - '0') != C[i]) pass = false;
      }
    }
    if (pass) {
      cout << i << endl;
      return 0;
    }
  }

  cout << -1 << endl;
}
