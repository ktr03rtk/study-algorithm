#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  vector<int> A(N);
  for (auto &a : A) cin >> a;

  int ans = 1;
  string status = "none";
  rep(i, 1, N) {
    if (status == "none") {
      if (A[i - 1] < A[i]) status = "more";
      if (A[i - 1] > A[i]) status = "less";
      continue;
    }
    if (status == "less") {
      if (A[i - 1] < A[i]) {
        ans++;
        status = "none";
      }
      continue;
    }
    if (status == "more") {
      if (A[i - 1] > A[i]) {
        ans++;
        status = "none";
      }
      continue;
    }
  }

  cout << ans << endl;
}
