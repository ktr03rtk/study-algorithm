#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (auto &a : A) cin >> a;

  map<int, int> m;

  for (auto a : A) {
    m[a]++;
    m[a + 1]++;
    m[a - 1]++;
  }

  int ans = 0;
  for (auto mm : m) {
    ans = max(ans, mm.second);
  }

  cout << ans << endl;
}
