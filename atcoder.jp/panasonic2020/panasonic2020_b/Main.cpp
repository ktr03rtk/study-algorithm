#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

int main() {
  int64_t h, w;
  cin >> h >> w;

  if (h == 1 || w == 1) {
    cout << 1 << endl;
  } else {
    cout << (h * w + 1) / 2 << endl;
  }
}
