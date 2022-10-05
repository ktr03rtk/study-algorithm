#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;
  vector<ll> A(N);
  for (auto &a : A) cin >> a;

  deque<ll> deq;
  ll val = N - 1;
  rep(i, 0, N / 2) {
    deq.push_back(val);
    deq.push_back(val);
    val -= 2;
  }
  if (N % 2 == 1) {
    deq.push_back(0);
  }

  sort(A.begin(), A.end(), greater<int>());

  rep(i, 0, N) {
    ll val = deq.front();
    if (val != A[i]) {
      cout << 0 << endl;
      return 0;
    }
    deq.pop_front();
  }

  ll ans = 1;
  rep(i, 0, N / 2) {
    ans *= 2;
    ans %= 1000000007;
  }
  cout << ans << endl;
}
