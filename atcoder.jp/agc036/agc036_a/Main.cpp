#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll S;
  cin >> S;

  const ll v = 1000000000;

  ll x = (S + v - 1) / v;
  ll y = (x * v) - S;

  cout << "0 0 1 1000000000 " << x << " " << y << endl;
}
