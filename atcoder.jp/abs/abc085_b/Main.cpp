#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> vec(n);
  rep(i, n) { cin >> vec[i]; }

  map<int, bool> m;
  int count = 0;

  rep(i, n) {
    if (m.count(vec[i]) == 0) {
      m.insert(make_pair(vec[i], true));
      count++;
    }
  }

  cout << count << endl;
}
