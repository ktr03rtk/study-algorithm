#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

int main() {
  int n;
  cin >> n;

  rep(i, n + 1) {
    int x = (int)(i * 1.08);
    if (x == n) {
      cout << i << endl;
      return 0;
    }
  }

  cout << ":(" << endl;
}
