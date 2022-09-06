#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> D(N);
  for (auto &d : D) cin >> d;

  int M;
  cin >> M;
  vector<int> T(M);
  for (auto &t : T) cin >> t;

  map<int, int> DD;
  map<int, int> TT;
  for (auto d : D) DD[d]++;
  for (auto t : T) TT[t]++;

  bool ans = true;

  for (auto t : T) {
    if (TT[t] > DD[t]) ans = false;
  }

  cout << (ans ? "YES" : "NO") << endl;
}
