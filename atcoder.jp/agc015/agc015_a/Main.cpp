#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N, A, B;
  cin >> N >> A >> B;

  if (A > B) {
    cout << 0 << endl;
    return 0;
  }

  if (N == 1 && A != B) {
    cout << 0 << endl;
    return 0;
  }

  cout << (B - A) * (N - 2) + 1 << endl;
}
