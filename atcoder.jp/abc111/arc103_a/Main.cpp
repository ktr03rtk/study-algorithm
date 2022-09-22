#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> V(N);
  for (auto &v : V) cin >> v;

  map<int, int> A, B;
  rep(i, 0, N) {
    if (i % 2 == 1) {
      A[V[i]]++;
    } else {
      B[V[i]]++;
    }
  }

  vector<pair<int, int>> AA, BB;
  for (auto a : A) AA.push_back({a.second, a.first});
  for (auto b : B) BB.push_back({b.second, b.first});
  sort(AA.begin(), AA.end(), greater<pair<int, int>>());
  sort(BB.begin(), BB.end(), greater<pair<int, int>>());

  int ans = 1000000000;
  if (AA[0].second != BB[0].second) {
    ans = N - AA[0].first - BB[0].first;
  } else if (AA.size() == 1 && BB.size() == 1) {
    ans = N / 2;
  } else {
    if (AA[0].first > BB[0].first) {
      ans = N - AA[0].first - BB[1].first;
    } else {
      ans = N - AA[1].first - BB[0].first;
    }
    if (2 <= AA.size()) ans = min(ans, N - AA[1].first - AA[0].first);
    if (2 <= BB.size()) ans = min(ans, N - AA[0].first - BB[1].first);
  }

  cout << ans << endl;
}
