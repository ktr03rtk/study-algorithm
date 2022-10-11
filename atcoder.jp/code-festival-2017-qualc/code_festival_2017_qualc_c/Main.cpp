#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;
  int N = S.size();
  deque<char> deq;
  rep(i, 0, N) { deq.push_back(S[i]); }

  int ans = 0;
  while (!deq.empty()) {
    if (deq.size() == 0 || deq.size() == 1) break;

    char left = deq.front();
    char right = deq.back();

    if (left == right) {
      deq.pop_front();
      deq.pop_back();
    } else if (left == 'x') {
      deq.pop_front();
      ans++;

    } else if (right == 'x') {
      deq.pop_back();
      ans++;
    } else {
      ans = -1;
      break;
    }
  }

  cout << ans << endl;
}
