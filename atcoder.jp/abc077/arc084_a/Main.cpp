#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<ll> A(N), B(N), C(N);
  for (auto &a : A) cin >> a;
  for (auto &b : B) cin >> b;
  for (auto &c : C) cin >> c;
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  sort(C.begin(), C.end());

  ll ans = 0;
  rep(j, 0, N) {
    ll a = lower_bound(A.begin(), A.end(), B[j]) - A.begin();
    ll c = N - (upper_bound(C.begin(), C.end(), B[j]) - C.begin());
    ans += a * c;
  }

  cout << ans << endl;
}
