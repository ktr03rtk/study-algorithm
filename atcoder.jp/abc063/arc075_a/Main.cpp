#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> S(N);

  int sum = 0;
  for (auto &s : S) {
    cin >> s;
    sum += s;
  }

  sort(S.begin(), S.end());

  int diff = 0;
  if (sum % 10 == 0) {
    for (auto &s : S) {
      if (s % 10 != 0) {
        diff = s;
        break;
      }
    }
    
    if (diff == 0) sum = 0;
  }

  cout << sum - diff << endl;
}
