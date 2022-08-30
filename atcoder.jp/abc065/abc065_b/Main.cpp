#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N + 1, 0);
  rep(i, 1, N + 1) { cin >> A[i]; }

  bool pass = false;
  int count = 0;
  int index = 1;

  rep(i, 1, N + 1) {
    count++;
    index = A[index];

    if (index == 2) {
      pass = true;
      break;
    }
  }

  cout << (pass ? count : -1) << endl;
}
