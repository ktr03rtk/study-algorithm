#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> C(N - 1), S(N - 1), F(N - 1);
  rep(i, 0, N - 1) {
    int c, s, f;
    cin >> c >> s >> f;
    C[i] = c;
    S[i] = s;
    F[i] = f;
  }

  vector<int> ans(N);
  rep(i, 0, N) {
    int count = 0;
    rep(j, i, N - 1) {
      if (count < S[j]) {
        count += S[j] - count + C[j];
      } else {
        if (count % F[j] == 0) {
          count += C[j];
        } else {
          count += (F[j] - count % F[j]) + C[j];
        }
      }
    }

    ans[i] = count;
  }

  for (auto a : ans) {
    cout << a << endl;
  }
}
