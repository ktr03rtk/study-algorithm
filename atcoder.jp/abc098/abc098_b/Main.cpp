#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  string S;
  cin >> S;

  int ans = 0;

  rep(i, 1, N - 1) {
    set<char> a;
    set<char> b;
    set<char> c;

    rep(j, 0, i) { a.insert(S[j]); }
    rep(j, i, N) { b.insert(S[j]); }

    int count = 0;
    for (auto aa : a) {
      for (auto bb : b) {
        if (aa == bb) count++;
      }
    }

    ans = max(ans, count);
  }

  cout << ans << endl;
}
