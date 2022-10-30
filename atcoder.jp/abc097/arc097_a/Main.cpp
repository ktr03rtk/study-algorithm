#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  int K;
  cin >> S >> K;
  vector<string> V;
  rep(i, 0, S.size()) {
    rep(j, 1, K + 1) {
      string s = S.substr(i, j);
      V.push_back(s);
    }
  }
  sort(V.begin(), V.end());
  V.erase(unique(V.begin(), V.end()), V.end());
  cout << V[K - 1] << endl;
}
