#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  set<pair<int, int>> E;
  rep(i, 0, M) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    E.insert({a, b});
    E.insert({b, a});
  }

  rep(i, 1, N - 1) {
    if (E.count({0, i}) && E.count({i, N - 1})) {
      cout << "POSSIBLE" << endl;
      return 0;
    }
  }
  cout << "IMPOSSIBLE" << endl;
}
