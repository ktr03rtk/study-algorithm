#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  ll N, M;
  cin >> N >> M;
  priority_queue<ll> que;
  rep(i, 0, N) {
    ll a;
    cin >> a;
    que.push(a);
  }

  rep(i, 0, M) {
    ll v = que.top();
    que.pop();
    que.push(v / 2);
  }

  ll ans = 0;
  rep(i, 0, N) {
    ll v = que.top();
    que.pop();
    ans += v;
  }

  cout << ans << endl;
}
