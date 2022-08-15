#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> vec(n);
  rep(i, n) { cin >> vec[i]; }

  bool isOdd = false;
  int count = 0;

  while (true) {
    rep(i, n) {
      if (vec[i] % 2 != 0) {
        isOdd = true;
      }
    }

    if (isOdd) {
      break;
    }

    rep(i, n) { vec[i] /= 2; }
    count++;
  }

  cout << count << endl;
}
