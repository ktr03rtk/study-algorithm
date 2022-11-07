#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N, K;
  string S;
  cin >> N >> K >> S;

  vector<int> V;
  if (S[0] == '0') V.push_back(0);
  for (int i = 0; i < S.size();) {
    int j = i;
    while (j < S.size() && S[j] == S[i]) j++;
    V.push_back(j - i);
    i = j;
  }
  if (S.back() == '0') V.push_back(0);

  vector<int> sums((int)V.size() + 1, 0);
  rep(i, 0, V.size()) { sums[i + 1] = sums[i] + V[i]; }

  int ans = 0;
  for (int left = 0; left < sums.size(); left += 2) {
    int right = left + K * 2 + 1;
    if (right >= sums.size()) right = (int)sums.size() - 1;
    ans = max(ans, sums[right] - sums[left]);
  }
  cout << ans << endl;
}
