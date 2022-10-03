#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

// いもす法
int main() {
  int N, Q;
  cin >> N >> Q;

  vector<int> G[1000000];
  vector<int> V(N, 0);
  rep(i, 0, N - 1) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  rep(i, 0, Q) {
    int p, x;
    cin >> p >> x;
    p--;
    V[p] += x;
  }

  queue<int> que;
  que.push(0);

  vector<bool> passed(N, false);
  passed[0] = true;
  rep(i, 0, N - 1) {
    while (!que.empty()) {
      int pos = que.front();
      que.pop();

      rep(j, 0, (int)G[pos].size()) {
        int nex = G[pos][j];
        if (!passed[nex]) {
          V[nex] += V[pos];
          passed[nex] = true;
          que.push(nex);
        }
      }
    }
  }

  rep(i, 0, N) {
    if (i) cout << " ";
    cout << V[i];
  }
  cout << endl;
}
