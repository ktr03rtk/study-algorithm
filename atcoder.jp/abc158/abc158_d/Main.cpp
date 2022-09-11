#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int Q;
  cin >> Q;

  deque<char> deq;
  rep(i, 0, S.size()) { deq.push_back(S[i]); }

  bool reverse = false;

  rep(i, 0, Q) {
    int t;
    cin >> t;

    if (t == 1) {
      reverse = !reverse;
    } else {
      int f;
      char c;
      cin >> f >> c;

      if (f == 1) {
        if (reverse) {
          deq.push_back(c);
        } else {
          deq.push_front(c);
        }
      } else {
        if (reverse) {
          deq.push_front(c);
        } else {
          deq.push_back(c);
        }
      }
    }
  }

  string s;
  int n = deq.size();
  rep(i, 0, n) {
    if (reverse) {
      s = deq.back();
      deq.pop_back();
    } else {
      s = deq.front();
      deq.pop_front();
    }
    cout << s;
  }
  cout << endl;
}
