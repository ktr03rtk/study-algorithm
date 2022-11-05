#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

vector<int> f(int N) {
  vector<int> res(3);
  int a = 0;
  while (N % 2 == 0) {
    a++;
    N /= 2;
  }

  int b = 0;
  while (N % 3 == 0) {
    b++;
    N /= 3;
  }

  res[0] = a;
  res[1] = b;
  res[2] = N;

  return res;
}

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (auto &a : A) cin >> a;

  vector<vector<int>> ex(N, vector<int>(3));

  int mina = 1000000000;
  int minb = 1000000000;
  rep(i, 0, N) {
    const auto &res = f(A[i]);
    ex[i] = res;
    mina = min(mina, res[0]);
    minb = min(minb, res[1]);
  }
  int c = ex[0][2];
  ll ans = 0;
  bool pass = true;
  rep(i, 0, N) {
    int a2, b2, c2;
    if (ex[i][2] != c) pass = false;
    if (ex[i][0] > mina) ans += (ll)(ex[i][0] - mina);
    if (ex[i][1] > minb) ans += (ll)(ex[i][1] - minb);
  }

  if (pass) {
    cout << ans << endl;
  } else {
    cout << -1 << endl;
  }
}
