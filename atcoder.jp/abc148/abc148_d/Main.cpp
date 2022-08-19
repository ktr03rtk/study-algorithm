#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> a(N);

  for (auto &v : a) cin >> v;

  int count = 1;

  rep(i, 0, N) {
    if (a[i] == count) count++;
  }

  int ans = -1;

  if (count != 1) {
    ans = N - count + 1;
  }

  cout << ans << endl;
}
