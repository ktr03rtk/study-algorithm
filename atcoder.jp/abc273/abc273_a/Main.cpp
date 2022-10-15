#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int ans = 1;
  while (N > 0) {
    ans *= N;
    N--;
  }

  cout << ans << endl;
}
