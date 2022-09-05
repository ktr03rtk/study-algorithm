#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (auto &a : A) cin >> a;

  int c2 = 0;
  int c4 = 0;
  int c = 0;

  for (auto a : A) {
    if (a % 4 == 0) {
      c4++;
    } else if (a % 2 == 0) {
      c2++;
    } else {
      c++;
    }
  }

  if (c4 + 1 == c && N == (c4 + c)) {
    cout << "Yes" << endl;
  } else if (c4 < c) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
}
