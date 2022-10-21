#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

int main() {
  string S;
  int K, N;
  cin >> S >> K;
  N = S.size();
  vector<int> V;

  rep(i, 0, N) {
    int j = S[i] - 'a';
    V.push_back(j);
  }

  rep(i, 0, N - 1) {
    if (V[i] != 0 && K >= (26 - V[i])) {
      K -= 26 - V[i];
      V[i] = 0;
    }
  }

  if (K > 0) {
    V[N - 1] = (V[N - 1] + K) % 26;
  }

  string ans;
  rep(i, 0, N) {
    char c = 'a' + V[i];
    ans += c;
  }
  cout << ans << endl;
}
