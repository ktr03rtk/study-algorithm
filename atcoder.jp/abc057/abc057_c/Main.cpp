#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  ll a = 0;

  for (ll i = 1; i * i <= N; ++i) {
    if (N % i == 0) {
      a = max(a, i);
    }
  }
  ll b = N / a;

  ll aa = to_string(a).size();
  ll bb = to_string(b).size();

  cout << max(aa, bb) << endl;
}
