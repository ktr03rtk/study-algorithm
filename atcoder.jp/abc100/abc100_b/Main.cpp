#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int D, N;
  cin >> D >> N;

  if (N == 100) N++;

  cout << N;
  rep(i, 0, D) cout << "00";
  cout << endl;
}
