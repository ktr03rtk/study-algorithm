#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int ans = -1;
  rep(i, 0, S.size()) {
    if (S[i] == 'a') ans = i + 1;
  }

  cout << ans << endl;
}
