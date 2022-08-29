#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N + 1);
  rep(i, 1, N + 1) { cin >> A[i]; }

  int ans = 0;

  rep(i, 1, N + 1) {
    if (A[A[i]] == i) {
      ans++;
    }
  }

  cout << ans / 2 << endl;
}
