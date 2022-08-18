#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> W(N);
  rep(i, 0, N) { cin >> W[i]; }

  vector<string> list;

  bool ans = true;

  rep(i, 0, N - 1) {
    if (W[i].back() != W[i + 1].front()) {
      ans = false;
      break;
    }
  }

  rep(i, 0, N) {
    auto itr = find(list.begin(), list.end(), W[i]);
    if (itr != list.end()) {
      ans = false;
      break;
    }
    list.push_back(W[i]);
  }

  cout << (ans ? "Yes" : "No") << endl;
}
