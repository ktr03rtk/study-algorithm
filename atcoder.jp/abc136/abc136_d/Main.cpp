#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;
  int N = S.size();

  vector<int> R(N, 0);
  vector<int> L(N, 0);
  int count = 0;

  rep(i, 0, N) {
    if (S[i] == 'R') {
      count++;
      continue;
    }

    R[i - 1] += count / 2;
    R[i] += count / 2;
    if (count % 2 == 1) R[i - 1] += 1;
    count = 0;
  }

  count = 0;
  for (int i = N - 1; i >= 0; i--) {
    if (S[i] == 'L') {
      count++;
      continue;
    }

    L[i + 1] += count / 2;
    L[i] += count / 2;
    if (count % 2 == 1) L[i + 1] += 1;
    count = 0;
  }

  rep(i, 0, N) {
    cout << R[i] + L[i];
    if (i == N - 1) {
      cout << endl;
    } else {
      cout << " ";
    }
  }
}
