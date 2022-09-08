#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> A(N);
  vector<ll> B(N);
  rep(i, 0, N) { cin >> A[i] >> B[i]; }

  vector<int> ord;
  rep(i, 0, N) ord.push_back(i);
  sort(ord.begin(), ord.end(), [&](int a, int b) { return B[a] < B[b]; });

  bool ans = true;
  ll val = 0;
  rep(i, 0, N) {
    val += A[ord[i]];
    if (val > B[ord[i]]) {
      ans = false;
      break;
    }
  }

  cout << (ans ? "Yes" : "No") << endl;
}
