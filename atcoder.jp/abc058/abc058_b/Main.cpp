#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string O, E;
  cin >> O >> E;

  rep(i, 0, O.size()) {
    cout << O[i];

    if (i < E.size()) {
      cout << E[i];
    }
  }
  cout << endl;
}
