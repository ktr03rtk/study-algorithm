#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

int main() {
  const int INF = 100000000;
  int n;
  cin >> n;

  vector<int> x(n);
  rep(i, n) { cin >> x[i]; }

  int max = *max_element(x.begin(), x.end());
  int min = *min_element(x.begin(), x.end());

  int result = INF;

  for (int i = min; i <= max; i++) {
    int sum = 0;
    rep(j, n) { sum += pow((x[j] - i), 2); }

    if (sum < result) {
      result = sum;
    }
  }

  cout << result << endl;
}
