#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  ll ans = 1;

  rep(i, 1, N + 1) { ans = (i * ans) % (1000000007); }

  cout << ans << endl;
}
