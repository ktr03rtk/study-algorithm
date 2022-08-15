#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  string s;
  cin >> s;

  int internalPasser = 0, foreignPasser = 0;

  rep(i, n) {
    if (s[i] == 'a') {
      if (internalPasser + foreignPasser < a + b) {
        internalPasser++;
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    } else if (s[i] == 'b') {
      if (internalPasser + foreignPasser < a + b && foreignPasser < b) {
        foreignPasser++;
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    } else {
      cout << "No" << endl;
    }
  }
}
