#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

ll N;
void func(ll cur, int use, ll &counter) {
  if (cur > N) return;
  if (use == 0b111) ++counter;

  func(cur * 10 + 7, use | 0b001, counter);
  func(cur * 10 + 5, use | 0b010, counter);
  func(cur * 10 + 3, use | 0b100, counter);
}

int main() {
  cin >> N;

  ll ans = 0;
  func(0, 0, ans);

  cout << ans << endl;
}
