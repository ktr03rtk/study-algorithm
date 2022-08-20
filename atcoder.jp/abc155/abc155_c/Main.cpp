  #include <bits/stdc++.h>

  #define rep(i, j, n) for (int i = j; i < (int)(n); i++)

  using namespace std;
  using ll = long long;

  int main() {
    int N;
    cin >> N;

    map<string, int> S;
    rep(i, 0, N) {
      string s;
      cin >> s;
      S[s]++;
    }

    int count = 0;
    for (auto s : S) {
      count = max(count, s.second);
    }

    for (auto s : S) {
      if (s.second == count) {
        cout << s.first << endl;
      }
    }
  }
