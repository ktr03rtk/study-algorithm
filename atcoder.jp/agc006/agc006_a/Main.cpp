#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  string s, t;
  cin >> s >> t;

  int count = 0;

  rep(i, 0, N) {
    if (s.substr(N - 1 - i, i + 1) == t.substr(0, i + 1)) {
      count = max(count, i + 1);
    }
  }

  cout << 2 * N - count << endl;
}
