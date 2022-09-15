#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  map<int, int> m;
  for (auto &a : A) {
    cin >> a;
    m[a]++;
  }

  if (N % 3 != 0) {
    if (m[0] == N) {
      cout << "Yes" << endl;
      return 0;
    } else {
      cout << "No" << endl;
      return 0;
    }
  }

  vector<int> v;

  for (auto mm : m) v.push_back(mm.first);
  if (v.size() == 1) {
    if (m[0] == N) {
      cout << "Yes" << endl;
      return 0;
    } else {
      cout << "No" << endl;
      return 0;
    }
  } else if (v.size() == 2) {
    if (m[0] == N / 3) {
      cout << "Yes" << endl;
      return 0;
    } else {
      cout << "No" << endl;
      return 0;
    }
  } else if (v.size() == 3) {
    if ((v[0] ^ v[1] ^ v[2]) != 0) {
      cout << "No" << endl;
      return 0;
    } else if (m[v[0]] == N / 3 && m[v[1]] == N / 3 && m[v[2]] == N / 3) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
