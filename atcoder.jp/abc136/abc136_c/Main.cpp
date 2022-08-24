#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> H(N);
  for (auto &h : H) cin >> h;

  bool ans = true;

  for (int i = N - 2; i > 0; i--) {
    if (H[i] > H[i + 1] + 1) {
      ans = false;
    } else if (H[i] == H[i + 1] + 1) {
      H[i]--;
    }
  }

  cout << (ans ? "Yes" : "No") << endl;
}
