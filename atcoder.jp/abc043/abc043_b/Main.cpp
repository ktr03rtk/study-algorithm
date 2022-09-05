#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  vector<char> T;

  for (auto s : S) {
    if (s == 'B') {
      if (!T.empty()) {
        T.pop_back();
      }
    } else {
      T.push_back(s);
    }
  }

  for (auto t : T) {
    cout << t;
  }
  cout << endl;
}
