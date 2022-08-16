#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;

int exchange(int a, int b, int c) {
  if (a % 2 == 1 || b % 2 == 1 || c % 2 == 1) {
    return 0;
  } else if (a == b && a == c) {
    return -1;
  }

  return exchange((b + c) / 2, (a + c) / 2, (a + b) / 2) + 1;
}

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int result = exchange(a, b, c);

  cout << result << endl;
}
