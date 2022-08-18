#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> P(N);
  for (auto &p : P) cin >> p;

  int count = 0;
  int minimum = 100000000;

  for (auto &p : P) {
    if (p <= minimum) {
      minimum = p;
      count++;
    }
  }

  cout << count << endl;
}
