#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  vector<map<int, int>> V(N);

  rep(i, 0, M) {
    int p, y;
    cin >> p >> y;
    p--;
    V[p][y] = i;
  }

  vector<pair<int, int>> id(M);
  rep(i, 0, N) {
    int val = i + 1;
    int j = 1;
    for (auto &q : V[i]) {
      id[q.second] = make_pair(val, j);
      j++;
    }
  }

  for (auto p : id) {
    cout << setfill('0') << right << setw(6) << p.first << setfill('0') << right
         << setw(6) << p.second << endl;
  }
}
