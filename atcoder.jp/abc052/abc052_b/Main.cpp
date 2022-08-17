#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;

  int ans = 0, count = 0;

  for (auto s : S) {
    if (s == 'I') {
      count++;
    } else if (s == 'D') {
      count--;
    }

    ans = max(ans, count);
  }

  cout << ans << endl;
}
