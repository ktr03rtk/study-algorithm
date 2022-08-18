#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  string list = "abcdefghijklmnopqrstuvwxyz";

  bool ans = true;

  for (auto l : list) {
    int count = 0;
    for (auto s : S) {
      if (l == s) count++;
    }

    if (count % 2 == 1) {
      ans = false;
    }
  }

  cout << (ans ? "Yes" : "No") << endl;
}
