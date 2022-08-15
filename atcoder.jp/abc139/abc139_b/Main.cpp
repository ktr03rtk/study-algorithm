#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

int main() {
  const int N = 30;

  int a, b;
  cin >> a >> b;

  int result = 0;

  rep(i, N) {
    if (a * i - i + 1 >= b) {
      result = i;
      break;
    }
  }

  cout << result << endl;
}
