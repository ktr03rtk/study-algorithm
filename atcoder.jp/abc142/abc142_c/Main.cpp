#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);

  rep(i, 0, n) { cin >> a[i]; }

  vector<pair<int, int>> b;

  rep(i, 0, n) { b.push_back(pair(a[i], i + 1)); }

  sort(b.begin(), b.end());

  for (auto v : b) {
    cout << v.second;

    if (v.first != n) {
      cout << " ";
    }
  }

  cout << endl;
}
