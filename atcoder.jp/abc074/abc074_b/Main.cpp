#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> x(n);
  rep(i, n) { cin >> x[i]; }

  int result = 0;

  rep(i, n) {
    int dist = abs(x[i] - k);

    if (dist > x[i]) {
      result += 2 * x[i];
    } else {
      result += 2 * dist;
    }
  }

  cout << result << endl;
}
