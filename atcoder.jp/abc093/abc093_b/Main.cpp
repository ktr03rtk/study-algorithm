#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int A, B, K;
  cin >> A >> B >> K;

  int n = min(B - A + 1, K);

  set<int> ans;

  rep(i, A, A + n) { ans.insert(i); }
  for (int i = B; i > B - n; i--) {
    ans.insert(i);
  }

  for (auto a : ans) {
    cout << a << endl;
  }
}
