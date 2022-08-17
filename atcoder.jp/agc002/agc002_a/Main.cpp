#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int A, B;
  cin >> A >> B;

  int n = B - A;

  string ans;
  if (A >= 0 && B > 0) {
    ans = "Positive";
  } else if (A <= 0 && B >= 0) {
    ans = "Zero";
  } else if (n % 2 == 1) {
    ans = "Positive";
  } else {
    ans = "Negative";
  }

  cout << ans << endl;
}
