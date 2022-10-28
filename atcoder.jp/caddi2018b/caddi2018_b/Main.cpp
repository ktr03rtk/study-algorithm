#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  bool odd = false;
  rep(i, 0, N) {
    int a;
    cin >> a;
    if (a & 1) odd = true;
  }

  if (odd) {
    cout << "first" << endl;
  } else {
    cout << "second" << endl;
  }
}
