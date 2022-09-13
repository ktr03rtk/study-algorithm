#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> L(N);
  for (auto &l : L) cin >> l;

  sort(L.begin(), L.end());

  int ans = 0;
  rep(i, 0, N - 2) {
    rep(j, i + 1, N - 1) {
      rep(k, j + 1, N) {
        if (L[i] + L[j] > L[k]) {
          ans++;
        }
      }
    }
  }

  cout << ans << endl;
}
