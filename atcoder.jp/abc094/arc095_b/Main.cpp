#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (auto &a : A) cin >> a;
  sort(A.begin(), A.end());

  if (A.size() == 2) {
    cout << A[1] << " " << A[0] << endl;
    return 0;
  }

  int key = A[A.size() - 1] / 2;

  auto itr = lower_bound(A.begin(), A.end(), key);

  int right = *itr;
  int left = A[itr - A.begin() - 1];

  int ans = right;
  if (right - key > key - left) {
    ans = left;
  }

  cout << A[A.size() - 1] << " " << ans << endl;
}
