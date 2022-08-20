#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> S(N);
  vector<int> P(N);

  rep(i, 0, N) {
    cin >> S[i];
    cin >> P[i];
  }

  vector<int> ans(N);
  rep(i, 0, N) ans[i] = i;

  sort(ans.begin(), ans.end(), [&](int a, int b) {
    if (S[a] != S[b]) return S[a] < S[b];
    return P[a] > P[b];
  });

  rep(i, 0, N) {
    cout << ans[i] + 1 << endl;
  }
}
