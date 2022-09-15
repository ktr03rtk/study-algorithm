#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<ll> A(N);
  vector<ll> B(N);
  ll sumA = 0;
  ll sumB = 0;

  for (auto &a : A) {
    cin >> a;
    sumA += a;
  }
  for (auto &b : B) {
    cin >> b;
    sumB += b;
  }

  if (sumA < sumB) {
    cout << -1 << endl;
    return 0;
  }

  vector<ll> much;
  vector<ll> little;

  rep(i, 0, N) {
    if (A[i] > B[i]) {
      much.push_back(A[i] - B[i]);
    } else if (A[i] < B[i]) {
      little.push_back(B[i] - A[i]);
    }
  }

  int ans = little.size();
  if (ans == 0) {
    cout << 0 << endl;
    return 0;
  }

  ll sumMuch = 0;
  ll sumLittle = 0;
  for (auto l : little) sumLittle += l;

  sort(much.begin(), much.end(), greater<ll>{});

  for (auto m : much) {
    ans++;
    sumMuch += m;
    if (sumMuch >= sumLittle) break;
  }

  cout << ans << endl;
}
