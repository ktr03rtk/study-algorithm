#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  set<int> S;
  for (auto &a : A) {
    cin >> a;
    S.insert(a);
  }

  if (S.size() % 2 == 0) {
    cout << S.size() - 1 << endl;
  } else {
    cout << S.size() << endl;
  }
}
