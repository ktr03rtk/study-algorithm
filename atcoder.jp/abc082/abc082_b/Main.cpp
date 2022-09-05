#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S, T;
  cin >> S >> T;

  sort(S.begin(), S.end());
  sort(T.begin(), T.end(), greater<>());

  if (S < T) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
