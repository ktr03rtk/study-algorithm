#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  set<char> st;
  for (auto s : S) st.insert(s);

  int ans = 1000000000;

  for (auto s : st) {
    int count = 0;
    int tmp = 0;

    rep(i, 0, S.size()) {
      if (S[i] == s) {
        tmp = max(tmp, count);
        count = 0;
        continue;
      }

      count++;
    }

    tmp = max(tmp, count);
    ans = min(ans, tmp);
  }

  cout << ans << endl;
}
