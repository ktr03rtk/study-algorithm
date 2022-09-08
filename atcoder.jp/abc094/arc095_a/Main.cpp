#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> X(N);
  vector<int> Y(N);
  for (auto &x : X) cin >> x;
  rep(i, 0, N) Y[i] = X[i];

  sort(Y.begin(), Y.end());

  map<int, int> idx;
  for (int i = N - 1; i >= 0; i--) {
    idx[Y[i]] = i;
  }

  rep(i, 0, N) {
    int j = idx[X[i]];
    if (j < N / 2)
      cout << Y[N / 2] << endl;
    else
      cout << Y[N / 2 - 1] << endl;
  }
}
