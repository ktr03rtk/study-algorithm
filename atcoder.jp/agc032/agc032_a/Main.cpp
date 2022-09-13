#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  list<int> B(N);
  for (auto &b : B) cin >> b;

  list<int> C;
  rep(i, 0, N) {
    for (int j = B.size() - 1; j >= 0; j--) {
      auto itr = B.begin();
      rep(k, 0, j) itr++;
      if (j + 1 == *itr) {
        C.push_back(*itr);
        B.erase(itr);
        break;
      }

      if (j == 0) {
        cout << -1 << endl;
        return 0;
      }
    }
  }

  reverse(C.begin(), C.end());
  for (auto c : C) {
    cout << c << endl;
  }
}
