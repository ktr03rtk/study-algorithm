#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, H;
  cin >> N >> H;
  vector<int> A(N), B(N + 1, 0);
  rep(i, 0, N) {
    cin >> A[i];
    cin >> B[i];
  }

  sort(A.begin(), A.end(), greater<int>());
  sort(B.begin(), B.end(), greater<int>());

  int count = 0;
  rep(i, 0, N + 1) {
    if (A[0] >= B[i]) {
      while (H > 0) {
        H -= A[0];
        count++;
      }
    } else {
      H -= B[i];
      count++;
    }
    if (H <= 0) break;
  }
  cout << count << endl;
}
