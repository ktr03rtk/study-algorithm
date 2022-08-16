#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;

int main() {
  int n;
  cin >> n;

  int result = 0;

  rep(i, 1, n + 1) {
    int denominator = i;

    while (true) {
      if (denominator == 1) {
        if (i > result) {
          result = i;
        }
        break;
      } else if (denominator % 2 == 0) {
        denominator /= 2;
      } else {
        break;
      }
    }
  }

  cout << result << endl;
}
