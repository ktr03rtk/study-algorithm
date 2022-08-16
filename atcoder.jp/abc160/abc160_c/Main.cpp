#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;

int main() {
  int k, n;
  cin >> k >> n;

  vector<int> a(n);
  rep(i, 0, n) { cin >> a[i]; }

  int max_distance = (k - a[n - 1]) + a[0];

  rep(i, 1, n) { max_distance = max(max_distance, a[i] - a[i - 1]); }

  cout << (k - max_distance) << endl;
}
