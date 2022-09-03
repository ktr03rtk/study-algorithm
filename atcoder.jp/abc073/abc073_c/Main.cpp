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

  for (auto a : A) m[a]++;

  int ans = 0;

  for (auto mm : m) {
    if (mm.second % 2 == 1) {
      ans++;
    }
  }

  cout << ans << endl;
}
