#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (auto &a : A) cin >> a;

  vector<int> B;
  map<int, int> count;

  for (auto a : A) {
    count[a]++;
    if (count[a] == 2) {
      count[a] = 0;
      B.push_back(a);
    }
  }

  sort(B.begin(), B.end(), greater<int>{});

  if (B.size() < 2) {
    cout << 0 << endl;
    return 0;
  }

  ll ans = (ll)B[0] * B[1];

  cout << ans << endl;
}
