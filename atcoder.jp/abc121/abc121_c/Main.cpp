#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<vector<int>> V(N, vector<int>(2));
  for (auto &v : V) cin >> v[0] >> v[1];

  ll ans = 0;
  int index = 0;
  int count = 0;
  int all_count = 0;
  sort(V.begin(), V.end());

  while (true) {
    ans += V[index][0];

    all_count++;
    if (all_count == M) break;

    count++;
    if (V[index][1] == count) {
      count = 0;
      index++;
    }
  }

  cout << ans << endl;
}
