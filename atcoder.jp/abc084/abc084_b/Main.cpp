#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int A, B;
  string S;
  cin >> A >> B >> S;

  string a = S.substr(0, A);
  string b = S.substr(A + 1);

  bool ans = true;

  if (S[A] != '-') ans = false;

  for (auto v : a) {
    if (v < '0' || v > '9') ans = false;
  }

  for (auto v : b) {
    if (v < '0' || v > '9') ans = false;
  }

  cout << (ans ? "Yes" : "No") << endl;
}
