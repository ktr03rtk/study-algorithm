#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

// 絶対値の和の最小化→メディアン
int main() {
  int N;
  cin >> N;
  vector<ll> A(N);
  ll sum = 0;
  rep(i, 0, N) {
    ll a;
    cin >> a;
    A[i] = a - i - 1;
  }
  sort(A.begin(), A.end());
  ll b = A[N / 2];

  ll ans = 0;
  rep(i, 0, N) { ans += abs(A[i] - b); }
  cout << ans << endl;
}
