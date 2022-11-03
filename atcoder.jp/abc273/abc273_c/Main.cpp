#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  vector<int> B(N);
  rep(i, 0, N) {
    int a;
    cin >> a;
    A[i] = a;
    B[i] = a;
  }
  // vector重複除外
  sort(B.begin(), B.end());
  B.erase(unique(B.begin(), B.end()), B.end());

  vector<int> C(N, 0);
  rep(i, 0, N) {
    auto itr = upper_bound(B.begin(), B.end(), A[i]);
    if (itr != B.end()) {
      int dist = distance(itr, B.end());
      C[dist]++;
    } else {
      C[0]++;
    }
  }

  rep(i, 0, N) { cout << C[i] << endl; }
}
