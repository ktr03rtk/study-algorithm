#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> A(M);
  vector<int> B(M);
  rep(i, 0, M) { cin >> A[i] >> B[i]; }

  vector<int> V(N, 0);

  rep(i, 0, N) {
    rep(j, 0, M) {
      if (i + 1 == A[j]) V[i]++;
      if (i + 1 == B[j]) V[i]++;
    }
  }

  for (auto v : V) {
    cout << v << endl;
  }
}
