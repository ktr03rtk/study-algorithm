#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  int index = 0;
  ll val = 0;
  rep(i, 1, N + 1) {
    val += i;
    index++;
    if (val >= N) break;
  }

  ll over = val - N;

  rep(i, 1, index + 1) {
    if (i == over) continue;

    cout << i << endl;
  }
}
