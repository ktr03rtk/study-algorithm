#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

ll N, K, L;
ll A[1 << 18];

bool solve(ll M) {
  ll count = 0;
  ll pre = 0;
  rep(i, 1, N + 1) {
    if (A[i] - pre >= M && L - A[i] >= M) {
      count += 1;
      pre = A[i];
    }
  }
  if (count >= K) return true;
  return false;
}

int main() {
  cin >> N >> L >> K;
  rep(i, 1, N + 1) { cin >> A[i]; }

  ll left = -1;
  ll right = L + 1;
  while (right - left > 1) {
    ll mid = left + (right - left) / 2;
    if (solve(mid) == false) {
      right = mid;
    } else {
      left = mid;
    }
  }
  cout << left << endl;
}
