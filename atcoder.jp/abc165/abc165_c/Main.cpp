#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int N, M, Q;
vector<ll> a, b, c, d;

// ナップサック
ll calc_score(const vector<int> &A) {
  ll score = 0;
  rep(i, 0, Q) {
    if (A[b[i]] - A[a[i]] == c[i]) {
      score += d[i];
    }
  }
  return score;
}

ll rec(vector<int> &A) {
  if (A.size() == N) {
    return calc_score(A);
  }

  ll result = 0;

  int prev_last = (A.empty() ? 1 : A.back());

  rep(i, prev_last, M + 1) {
    // 組み合わせを全数試す
    A.push_back(i);
    result = max(result, rec(A));
    A.pop_back();
  }
  return result;
}

int main() {
  cin >> N >> M >> Q;
  a.resize(Q);
  b.resize(Q);
  c.resize(Q);
  d.resize(Q);
  rep(i, 0, Q) {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
    // 添字を0始まりにする
    --a[i], --b[i];
  }

  vector<int> A;
  cout << rec(A) << endl;
}
