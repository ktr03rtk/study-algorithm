#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  const int N = 2000;
  int A, B;
  cin >> A >> B;

  vector<int> a;
  vector<int> b;
  vector<int> c;

  rep(i, 0, N) {
    if (i * 8 / 100 == A) a.push_back(i);
    if (i * 10 / 100 == B) b.push_back(i);
  }

  int ans = -1;

  set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(c));
  auto itr = min_element(c.begin(), c.end());
  if (itr != c.end()) {
    ans = *itr;
  }

  cout << ans << endl;
}
