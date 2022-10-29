#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

ll N;
map<ll, ll> memo;

ll f(ll n) {
  if (memo[n]) return memo[n];
  if (n == 0) return 1;

  ll res = f(n / 2) + f(n / 3);
  memo[n] = res;
  return res;
}

int main() {
  cin >> N;
  cout << f(N) << endl;
}
