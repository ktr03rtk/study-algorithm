#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

int N;

void dfs(string s, char max) {
  if ((int)s.length() == N) {
    cout << s << endl;
  } else {
    for (char c = 'a'; c <= max; c++) {
      dfs(s + c, ((c == max) ? (char)(max + 1) : max));
    }
  }
}

// 重複組合せ,dfs
int main() {
  cin >> N;
  dfs("", 'a');
}
