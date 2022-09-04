#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N, K;
  cin >> N >> K;

  vector<int> A(N);
  for (auto &a : A) cin >> a;

  map<int, int> m;
  for (auto a : A) m[a]++;

  vector<int> B;
  for (auto mm : m) B.push_back(mm.second);

  sort(B.begin(), B.end());

  int ans = 0;

  if (N <= K) {
    cout << 0 << endl;
  } else {
    rep(i, 0, B.size() - K) {
      ans += B[i];
    }
    cout << ans << endl;
  }
}
