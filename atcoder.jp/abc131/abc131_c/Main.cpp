#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

// 最大公約数 ユークリッドの互除法
ll GCD(ll A, ll B) {
  while (A >= 1 && B >= 1) {
    if (A < B) {
      B = B % A;
    } else {
      A = A % B;
    }
  }
  if (A >= 1) return A;
  return B;
}

int main() {
  ll A, B, C, D;
  cin >> A >> B >> C >> D;

  ll nc = B / C - (A + C - 1) / C + 1;
  ll nd = B / D - (A + D - 1) / D + 1;

  ll CD = C * D / GCD(C, D);
  ll ncd = B / CD - (A + CD - 1) / CD + 1;

  cout << B - A + 1 - nc - nd + ncd << endl;
}
