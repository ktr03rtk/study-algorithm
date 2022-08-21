#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, L;
  cin >> N >> L;

  vector<string> S(N);
  rep(i, 0, N) cin >> S[i];

  sort(S.begin(), S.end());

  rep(i, 0, N) { cout << S[i]; }

  cout << endl;
}
