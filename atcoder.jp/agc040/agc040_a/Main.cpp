#include <bits/stdc++.h>
 
#define rep(i, j, n) for (int i = j; i < (int)(n); i++)
 
using namespace std;
using ll = long long;
 
int main() {
  string S;
  cin >> S;
  int N = S.size();
 
  vector<int> less(N, 0);
  vector<int> more(N, 0);
 
  rep(i, 0, N) {
    if (S[i] == '<') {
      more[i + 1] = more[i] + 1;
    }
  }
 
  for (int i = N - 1; i >= 0; i--) {
    if (S[i] == '>') {
      less[i] = less[i + 1] + 1;
    }
  }
 
  ll ans = 0;
 
  rep(i, 0, N + 1) { ans += max(less[i], more[i]); }
 
  cout << ans << endl;
}