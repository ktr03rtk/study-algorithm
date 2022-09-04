#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  double ans = 0;

  rep(i, 1, N + 1) {
    int count = 0;
    while (true) {
      if (i * pow(2, count) >= K) break;
      count++;
    }

    ans += pow(0.5, count);
  }
  
  ans /= N;

  cout << fixed << setprecision(10) << ans << endl;
}
