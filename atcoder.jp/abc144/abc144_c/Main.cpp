#include <bits/stdc++.h>
 
#define rep(i, j, n) for (int i = j; i < (int)(n); i++)
 
using namespace std;
using ll = long long;
 
int main() {
  ll N;
  cin >> N;
 
  ll val = sqrt(N);
  ll ans = 1000000000000;
 
  rep(i, 1, val + 1) {
    if (N % i == 0) {
      ans = min(ans, (i - 1 + N / i - 1));
    }
  }
 
  cout << ans << endl;
}