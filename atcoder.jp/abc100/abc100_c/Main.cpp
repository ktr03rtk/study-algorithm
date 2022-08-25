#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  vector<int> A(N);
  for (auto &a : A) cin >> a;

  int ans = 0;

  for (auto a : A) {
    int count = 0;
    while (true) {
      if (a % 2 != 0) break;

      a = a / 2;
      count++;
    }

    ans += count;
  }

  cout << ans << endl;
}
