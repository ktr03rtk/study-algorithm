#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  vector<int> v(2, 0);

  rep(i, 0, S.size()) {
    if (S[i] == '0') {
      v[0]++;
    } else {
      v[1]++;
    }
  }

  cout << min(v[0], v[1]) * 2 << endl;
}
