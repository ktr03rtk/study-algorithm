#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (auto &a : A) cin >> a;

  // 両端キュー
  deque<int> deq;
  rep(i, 0, N) {
    if (i % 2 == 0)
      deq.push_back(A[i]);
    else
      deq.push_front(A[i]);
  }

  rep(i, 0, N) {
    if (0 < i) cout << " ";

    int x;
    if (N % 2 == 0) {
      x = deq.front();
      deq.pop_front();
    } else {
      x = deq.back();
      deq.pop_back();
    }

    cout << x;
  }

  cout << endl;
}
