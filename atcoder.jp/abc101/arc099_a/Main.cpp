#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> A;
  for (auto &a : A) cin >> a;

  cout << (N - 1 + K - 2) / (K - 1) << endl;
}
