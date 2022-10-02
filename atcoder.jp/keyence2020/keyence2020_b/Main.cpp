#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> X(N), L(N), LL(N);
  rep(i, 0, N) {
    int x, l;
    cin >> x >> l;
    X[i] = x;
    L[i] = l;
    LL[i] = x + l;
  }

  vector<int> index;
  rep(i, 0, N) index.push_back(i);
  sort(index.begin(), index.end(), [&](int a, int b) { return LL[a] < LL[b]; });

  int ans = 0;
  int ptr = -1000000000;
  rep(i, 0, N) {
    if (X[index[i]] - L[index[i]] < ptr) {
      continue;
    }

    ptr = X[index[i]] + L[index[i]];
    ans++;
  }

  cout << ans << endl;
}
