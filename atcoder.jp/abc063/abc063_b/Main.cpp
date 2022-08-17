#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  set<char> appeared;

  bool ans = true;

  for (auto s : S) {
    if (!appeared.count(s)) {
      appeared.insert(s);
    } else {
      ans = false;
      break;
    }
  }

  cout << (ans ? "yes" : "no") << endl;
}
