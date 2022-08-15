#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

int main() {
  string s;
  cin >> s;

  int result = 0;

  rep(i, s.size()) {
    if (s.at(i) == '1') {
      result++;
    }
  }

  cout << result << endl;
}
