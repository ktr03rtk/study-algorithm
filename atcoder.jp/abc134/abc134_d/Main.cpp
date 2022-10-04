#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> A(N + 1, 0), B(N + 1, 0);
  rep(i, 1, N + 1) { cin >> A[i]; }

  for (int i = N; i > 0; i--) {
    int sum = A[i];
    for (int j = 2 * i; j <= N; j += i) sum += B[j];
    B[i] = sum % 2;
  }

  vector<int> ans;
  rep(i, 1, N + 1) {
    if (B[i] == 1) {
      ans.push_back(i);
    }
  }

  cout << ans.size() << endl;
  for (auto a : ans) cout << a << " ";
  cout << endl;
}
