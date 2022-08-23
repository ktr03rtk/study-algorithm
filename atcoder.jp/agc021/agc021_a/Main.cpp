#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string N;
  cin >> N;

  string val{N.front()};

  rep(i, 1, N.size()) { val += "9"; }

  int ans = 0;
  if (N != val) {
    val.front() = to_string(int(N.front() - '1')).front();
  }


  for (auto v : val) {
    ans += (v - '0');
  }

  cout << ans << endl;
}
