#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> X(N);
  vector<int> Y(N);
  rep(i, 0, N) { cin >> X[i] >> Y[i]; }

  double distance = 0;
  int count = 0;

  rep(i, 0, N) {
    rep(j, i + 1, N) {
      distance += sqrt(pow(X[i] - X[j], 2) + pow(Y[i] - Y[j], 2));
      count++;
    }
  }

  double ans = distance / count * (N - 1);

  cout << fixed << setprecision(10) << ans << endl;
}
