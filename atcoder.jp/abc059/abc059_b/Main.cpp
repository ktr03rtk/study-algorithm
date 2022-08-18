#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string A, B;
  cin >> A >> B;

  string ans;

  if (A.length() > B.length()) {
    ans = "GREATER";
  } else if (A.length() < B.length()) {
    ans = "LESS";
  } else if (A == B) {
    ans = "EQUAL";
  } else {
    if (A > B) {
      ans = "GREATER";
    } else {
      ans = "LESS";
    }
  }

  cout << ans << endl;
}
