#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;

  int count = 0;
  int left = 0;
  rep(i, 0, N) {
    if (S[i] == '(') {
      count++;
    } else {
      count--;
      if (count < 0) {
        left = max(left, -count);
      }
    }
  }

  rep(i, 0, left) S = '(' + S;
  N += left;
  count = 0;
  rep(i, 0, N) {
    if (S[i] == '(') {
      count++;
    } else {
      count--;
    }
  }

  rep(i, 0, count) { S = S + ')'; }

  cout << S << endl;
}
