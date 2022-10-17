#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

void rec(int d, ll val, vector<ll> &all) {
  all.push_back(val);
  if (d == 10) return;

  rep(i, -1, 2) {
    int add = (val % 10) + i;
    if (add >= 0 && add <= 9) rec(d + 1, val * 10 + add, all);
  }
}

int main() {
  int K;
  cin >> K;
  vector<ll> all;
  rep(i, 1, 10) rec(1, i, all);

  sort(all.begin(), all.end());
  cout << all[K - 1] << endl;
}
