#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> A(N);
  vector<ll> B(N);
  rep(i, 0, N) { cin >> A[i] >> B[i]; }

  ll ans = 0;

  for (int i = N - 1; i >= 0; i--) {
    if ((A[i] + ans) % B[i] != 0) {
      ans += B[i] - (A[i] + ans) % B[i];
    }
  }

  cout << ans << endl;
}
