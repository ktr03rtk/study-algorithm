#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (auto &a : A) cin >> a;

  int ans = 1000000000;
  rep(i, -100, 101) {
    int val = 0;
    for (auto a : A) {
      val += pow(a - i, 2);
    }
    ans = min(ans, val);
  }

  cout << ans << endl;
}
