#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N;
  vector<int> P(N);
  for (auto &p : P) cin >> p;
  prev_permutation(P.begin(), P.end());

  rep(i, 0, N) {
    if (i) cout << " ";
    cout << P[i];
  }
  cout << endl;
}
