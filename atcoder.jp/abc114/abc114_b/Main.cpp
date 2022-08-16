#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  const int INF = 1000;
  string s;
  cin >> s;

  int ans = INF;
  rep(i, 0, s.size() - 2) {
    int val = stoi(s.substr(i, 3));
    if (abs(753 - val) < ans) {
      ans = abs(753 - val);
    }
  }

  cout << ans << endl;
}
