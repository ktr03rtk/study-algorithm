#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<ll> A(N);
  for (auto &a : A) cin >> a;
  sort(A.begin(), A.end());

  ll sum = A[0];
  ll count = 1;
  rep(i, 1, N) {
    if (A[i] <= 2 * sum) {
      count++;
    } else {
      count = 1;
    }
    sum += A[i];
  }

  cout << count << endl;
}
