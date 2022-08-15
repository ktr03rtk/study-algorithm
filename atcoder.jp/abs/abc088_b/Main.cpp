#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> vec(n);
  rep(i, n) { cin >> vec[i]; }

  sort(vec.begin(), vec.end(), greater<int>{});

  int Alice = 0, Bob = 0;

  rep(i, n) {
    if (i % 2 == 0) {
      Alice += vec[i];
    } else {
      Bob += vec[i];
    }
  }

  cout << (Alice - Bob) << endl;
}
