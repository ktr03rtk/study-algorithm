#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;
  int a = stoi(s.substr(0, 1));
  int b = stoi(s.substr(1, 1));
  int c = stoi(s.substr(2, 1));
  int d = stoi(s.substr(3, 1));

  if (a - b - c - d == 7)
    printf("%d-%d-%d-%d=7\n", a, b, c, d);
  else if (a - b - c + d == 7)
    printf("%d-%d-%d+%d=7\n", a, b, c, d);
  else if (a - b + c - d == 7)
    printf("%d-%d+%d-%d=7\n", a, b, c, d);
  else if (a - b + c + d == 7)
    printf("%d-%d+%d+%d=7\n", a, b, c, d);
  else if (a + b - c - d == 7)
    printf("%d+%d-%d-%d=7\n", a, b, c, d);
  else if (a + b - c + d == 7)
    printf("%d+%d-%d+%d=7\n", a, b, c, d);
  else if (a + b + c - d == 7)
    printf("%d+%d+%d-%d=7\n", a, b, c, d);
  else if (a + b + c + d == 7)
    printf("%d+%d+%d+%d=7\n", a, b, c, d);
}
