#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

int main() {
  double A, B;
  cin >> A >> B;

  double ans = B / A;

  cout << fixed << setprecision(3) << ans << endl;
}
