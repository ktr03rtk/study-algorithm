#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, Q;
  string S;
  cin >> N >> Q >> S;

  //累積和
  vector<int> sum(N + 1, 0);
  rep(i, 1, N) { sum[i + 1] = sum[i] + (S.substr(i - 1, 2) == "AC"); }

  rep(i, 0, Q) {
    int l, r;
    cin >> l >> r;

    --l;

    cout << sum[r] - sum[l + 1] << endl;
  }
}
