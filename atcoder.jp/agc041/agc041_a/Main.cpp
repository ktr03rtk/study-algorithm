#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N, A, B;
  cin >> N >> A >> B;

  ll ans;

  if ((A - B) % 2 == 0) {
    ans = (B - A) / 2;
  } else {
    ans = min(A - 1, N - B) + 1 + (B - A - 1) / 2;
  }

  cout << ans << endl;
}
