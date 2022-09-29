#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  vector<ll> A(N);
  for (auto &a : A) cin >> a;

  ll min_val = 1000000000;
  ll sum = 0;
  ll count = 0;
  for (auto a : A) {
    if (a < 0) count++;
    sum += abs(a);
    min_val = min(min_val, abs(a));
  }

  if (count % 2 == 0) {
    cout << sum << endl;
  } else {
    cout << sum - 2 * min_val << endl;
  }
}
