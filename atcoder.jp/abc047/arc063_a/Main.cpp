#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int ans = 0;
  rep(i, 0, S.size() - 1) {
    if (S[i] != S[i + 1]) {
      ans++;
    }
  }

  cout << ans << endl;
}
