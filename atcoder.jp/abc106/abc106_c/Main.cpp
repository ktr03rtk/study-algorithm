#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  ll K;
  cin >> S >> K;

  char ans = '1';

  for (auto s : S) {
    if (s == '1') {
      K--;
      if (K == 0) break;
    } else {
      ans = s;
      break;
    }
  }

  cout << ans << endl;
}
