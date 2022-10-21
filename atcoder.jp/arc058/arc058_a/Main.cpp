#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> V(K);
  for (auto &v : V) cin >> v;

  rep(i, N, 100000) {
    int j = i;
    set<int> S;
    while (j != 0) {
      S.insert(j % 10);
      j /= 10;
    }

    bool flag = true;
    rep(i, 0, K) {
      if (S.count(V[i])) flag = false;
    }
    if (flag) {
      cout << i << endl;
      return 0;
    }
  }
}
