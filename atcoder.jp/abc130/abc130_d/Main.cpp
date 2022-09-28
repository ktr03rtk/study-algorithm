#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

// しゃくとり法
int main() {
  ll N, K;
  cin >> N >> K;

  vector<ll> A(N);
  for (auto &a : A) cin >> a;

  ll right = 0;
  ll ans = 0;
  ll sum = 0;
  rep(left, 0, N) {
    while (right < N && sum < K) {
      sum += A[right];
      right++;
    }
    if (sum >= K) ans += (N - right + 1);
    sum -= A[left];
  }

  cout << ans << endl;
}
