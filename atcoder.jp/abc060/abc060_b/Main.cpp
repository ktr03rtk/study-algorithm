#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  string ans = "NO";

  rep(i, 1, B + 1) {
    if ((A * i) % B == C) {
      ans = "YES";
    }
  }

  cout << ans << endl;
}
