#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int ans = 0;
  int count = 0;
  for (int i = S.size() - 1; i >= 0; i--) {
    if (S[i] == 'S') {
      count++;
      ans = max(ans, count);
    } else {
      count--;
    }
  }
  cout << ans * 2 << endl;
}
