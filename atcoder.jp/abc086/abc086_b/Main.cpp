#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

int main() {
  const int MAX = 10000;
  string a, b;
  cin >> a >> b;

  int val = stoi(a + b);

  bool result = false;

  rep(i, MAX+1) {
    if (i * i == val) {
      result = true;
      break;
    }
  }

  cout << (result ? "Yes" : "No") << endl;
}
