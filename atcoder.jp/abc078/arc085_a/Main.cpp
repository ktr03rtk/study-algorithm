#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  cin >> N >> M;

  int time = 1900 * M + 100 * (N - M);
  int x = pow(2, M);

  int ans = time * x;
  cout << ans << endl;
}
