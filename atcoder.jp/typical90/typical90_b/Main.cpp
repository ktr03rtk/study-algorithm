#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  if (N % 2 == 1) return 0;

  string s = "";
  rep(i, 0, N / 2) { s += "()"; }
  sort(s.begin(), s.end());
  do {
    int l = 0, r = 0;
    bool pass = true;

    rep(i, 0, N) {
      if (s[i] == '(') {
        l++;
      } else {
        r++;
      }

      if (r > l) pass = false;
    }
    if (pass) cout << s << endl;
  } while (next_permutation(s.begin(), s.end()));
}
