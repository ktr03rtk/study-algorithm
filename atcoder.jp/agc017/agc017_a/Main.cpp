#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N, P, A;
  cin >> N >> P;

  bool isOdd = false;
  rep(i, 0, N) {
    cin >> A;
    if (A % 2 == 1) isOdd = true;
  }

  if (isOdd == false) {
    if (P == 0) {
      cout << (ll)pow(2, N) << endl;
    } else {
      cout << 0 << endl;
    }
    return 0;
  }

  cout << (ll)pow(2, N - 1) << endl;
}
