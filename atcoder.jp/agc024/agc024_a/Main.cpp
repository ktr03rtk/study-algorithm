#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll A, B, C, K;
  cin >> A >> B >> C >> K;

  int ans = 0;

  if (K % 2 == 0) {
    ans = A - B;
  } else {
    ans = B - A;
  }

  cout << ans << endl;
}
