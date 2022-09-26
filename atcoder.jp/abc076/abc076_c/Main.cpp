#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string SS, T;
  cin >> SS >> T;

  int N = SS.size();
  int M = T.size();

  set<string> ans;

  for (int i = N; i >= M; i--) {
    int start = i - M;

    bool pass = true;
    rep(j, 0, M) {
      if (SS[start + j] != '?' && SS[start + j] != T[j]) pass = false;
    }

    if (pass) {
      string s;
      rep(i, 0, N) s += SS[i];
      rep(i, 0, M) s[start + i] = T[i];
      rep(i, 0, N) if (s[i] == '?') s[i] = 'a';
      ans.insert(s);
    }
  }

  if (ans.size() == 0) {
    cout << "UNRESTORABLE" << endl;
    return 0;
  }

  cout << *ans.begin() << endl;
}
