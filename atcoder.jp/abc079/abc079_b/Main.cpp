#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> v(87);

  v[0] = 2;
  v[1] = 1;
  rep(i, 2, N+1) { v[i] = v[i - 2] + v[i - 1]; }

  cout << v[N] << endl;
}
