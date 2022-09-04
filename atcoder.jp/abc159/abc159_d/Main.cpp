#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> A(N);
  for (auto &a : A) cin >> a;

  map<ll, ll> m;
  for (auto a : A) m[a]++;

  ll total = 0;
  for (auto mm : m) total += mm.second * (mm.second - 1) / 2;

  vector<ll> B;
  for (auto a : A) {
    ll val = m[a];
    B.push_back(total - val * (val - 1) / 2 + (val - 1) * (val - 2) / 2);
  }

  for (auto b : B) {
    cout << b << endl;
  }
}
