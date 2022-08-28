#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (auto &a : A) cin >> a;

  int odd = 1;
  for (auto a : A) {
    if (a % 2 == 0) {
      odd *= 2;
    }
  }

  cout << pow(3, N) - odd << endl;
}
