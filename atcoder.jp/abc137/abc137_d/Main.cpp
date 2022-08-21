#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

// 貪欲法
int main() {
  int N, M;
  cin >> N >> M;

  vector<vector<int>> AtoB(M + 1);
  rep(i, 0, N) {
    int A, B;
    cin >> A >> B;

    if (A > M) continue;

    AtoB[A].push_back(B);
  }

  ll result = 0;
  priority_queue<ll> que;

  for (auto Bs : AtoB) {
    for (auto B : Bs) {
      que.push(B);
    }

    if (!que.empty()) {
      result += que.top();
      que.pop();
    }
  }
  cout << result << endl;
}
