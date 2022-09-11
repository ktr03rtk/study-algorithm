#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  map<int, int> m;
  rep(i, 0, N) {
    int a;
    cin >> a;
    m[a]++;
  }

  int ans = 0;
  for (auto mm : m) {
    if (mm.first < mm.second) {
      ans += mm.second - mm.first;
    } else if (mm.first > mm.second) {
      ans += mm.second;
    }
  }

  cout << ans << endl;
}
