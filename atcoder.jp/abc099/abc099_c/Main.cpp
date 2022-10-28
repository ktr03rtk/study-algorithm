#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

vector<int> memo;

int f(int n) {
  if (n == 0) return 0;
  if (memo[n] != -1) return memo[n];

  int res = n;

  for (int pow6 = 1; pow6 <= n; pow6 *= 6) res = min(res, f(n - pow6) + 1);

  for (int pow9 = 1; pow9 <= n; pow9 *= 9) res = min(res, f(n - pow9) + 1);

  return memo[n] = res;
}

// メモ化再帰、dp
int main() {
  int N;
  cin >> N;
  memo.resize(N + 1);
  rep(i, 0, N + 1) memo[i] = -1;

  cout << f(N) << endl;
}
