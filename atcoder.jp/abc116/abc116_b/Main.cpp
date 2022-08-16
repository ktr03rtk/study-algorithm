#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int f(int n) {
  if (n % 2 == 0) {
    return n / 2;
  } else {
    return 3 * n + 1;
  }
}

int main() {
  int s;
  cin >> s;

  int current = s, m = 1;
  set<int> appeared;
  appeared.insert(s);

  while (true) {
    m++;
    int next = f(current);

    if (appeared.count(next)) {
      break;
    } else {
      appeared.insert(next);
    }

    current = next;
  }

  cout << m << endl;
}
