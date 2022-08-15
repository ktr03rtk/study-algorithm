#include <bits/stdc++.h>

#define rep(i, n) for (int i = 1; i <= (int)(n); i++)

using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  int result = 0;

  rep(i, n) {
    int sum = 0;
    int j = i;
    while (j > 0) {
      sum += j % 10;
      j /= 10;
    }

    if (sum >= a && sum <= b) {
      result += i;
    }
  }

  cout << result << endl;
}
