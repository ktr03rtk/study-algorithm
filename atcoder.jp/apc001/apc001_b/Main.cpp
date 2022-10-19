#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

int main() {
  int N;
  cin >> N;
  vector<ll> A(N), B(N);
  for (auto &a : A) cin >> a;
  for (auto &b : B) cin >> b;
  ll A2 = 0;
  ll B2 = 0;
  rep(i, 0, N) {
    if (A[i] > B[i]) A2 += A[i] - B[i];
    if (A[i] < B[i]) B2 += (B[i] - A[i]) / 2;
  }
  if (B2 >= A2) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
