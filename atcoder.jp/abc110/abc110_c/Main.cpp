#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S, T;
  cin >> S >> T;
  int N = S.size();

  int index = 0;
  int max_ptr = 0;

  while (true) {
    if (S[index] != T[index]) {
      if (index < max_ptr) {
        cout << "No" << endl;
        return 0;
      }

      char s = S[index];
      char c = T[index];
      rep(i, 0, N) {
        if (S[i] == s) {
          S[i] = c;
        } else if (S[i] == c) {
          S[i] = s;
        }
      }

      max_ptr = index;
      index = 0;
      continue;
    }

    if (index == N) {
      cout << "Yes" << endl;
      return 0;
    }

    index++;
  }
}
