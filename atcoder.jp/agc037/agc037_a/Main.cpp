#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;
  int N = S.size();

  int ans = 0;
  bool one = false;
  int pt = 0;

  while (pt < N) {
    if (pt == N - 2 && S[pt] == S[pt + 1]) {
      ans++;
      break;
    }

    if (one && S[pt] == S[pt - 1]) {
      ans++;
      pt += 2;
      one = false;
    } else {
      ans++;
      pt++;
      one = true;
    }
  }

  cout << ans << endl;
}
