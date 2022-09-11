#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;
  vector<ll> A(5);
  for (auto &a : A) cin >> a;

  ll val = LLONG_MAX;
  rep(i, 0, 5) val = min(val, A[i]);

  ll ans = 4 + (N + val - 1) / val;
  
  cout << ans << endl;
}
