#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<vector<int>> A(N);
  vector<int> S(Q), T(Q);
  rep(i, 0, N) {
    int l;
    cin >> l;
    rep(j, 0, l) {
      int a;
      cin >> a;
      A[i].push_back(a);
    }
  }
  rep(i, 0, Q) {
    int s, t;
    cin >> s >> t;
    S[i] = s;
    T[i] = t;
  }

  vector<int> ans(Q);
  rep(i, 0, Q) { ans[i] = A[S[i] - 1][T[i] - 1]; }

  for (auto a : ans) cout << a << endl;
}
