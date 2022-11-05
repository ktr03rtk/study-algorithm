#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

ll check(ll x, ll A, ll B) {
  ll dx = to_string(x).length();
  return A * x + B * dx;
}

// 二分探索
int main() {
  ll A, B, X;
  cin >> A >> B >> X;

  ll ok = 0, ng = 1000000001;
  while (ok + 1 != ng) {
    ll md = (ok + ng) / 2;
    if (check(md, A, B) <= X)
      ok = md;
    else
      ng = md;
  }

  cout << ok << endl;
}
