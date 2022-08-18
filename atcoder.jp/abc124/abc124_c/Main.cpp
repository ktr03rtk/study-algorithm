#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;
  int n = S.size();

  int count1 = 0;
  rep(i, 0, n) {
    if ((S[i] - '0') == i % 2) {
      count1++;
    }
  }

  int count2 = 0;
  rep(i, 0, n) {
    if ((S[i] - '0') != i % 2) {
      count2++;
    }
  }

  cout << min(count1, count2) << endl;
}
