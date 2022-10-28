#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;
  string S;
  cin >> S;

  int a = 0;
  rep(i, 1, N) {
    if (S[i - 1] != S[i]) a++;
  }

  cout << N - 1 - max(a - K * 2, 0) << endl;
}
