#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int R, G, B, N;
  cin >> R >> G >> B >> N;

  int ans = 0;

  rep(i, 0, 3001) {
    rep(j, 0, 3001) {
      int val = N - (R * i + G * j);
      if (val >= 0 && val % B == 0) ans++;
    }
  }

  cout << ans << endl;
}
