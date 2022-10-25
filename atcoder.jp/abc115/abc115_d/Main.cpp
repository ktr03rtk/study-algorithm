#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

vector<ll> p, total;

ll f(int level, ll x) {
  if (level == 0) return 1;

  if (x < 1) return 0;
  x--;

  if (x < total[level - 1]) return f(level - 1, x);
  x -= total[level - 1];

  if (x < 1) return p[level - 1] + 1;
  x--;

  if (x < total[level - 1]) return p[level - 1] + 1 + f(level - 1, x);
  x -= total[level - 1];

  return p[level - 1] * 2 + 1;
}

// 再帰
int main() {
  int N;
  ll X;
  cin >> N >> X;
  X--;
  p.resize(N + 1);
  total.resize(N + 1);

  total[0] = 1;
  rep(i, 1, N + 1) total[i] = total[i - 1] * 2 + 3;
  p[0] = 1;
  rep(i, 1, N + 1) p[i] = p[i - 1] * 2 + 1;

  cout << f(N, X) << endl;
}
