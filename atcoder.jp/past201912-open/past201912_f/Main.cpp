#include <bits/stdc++.h>

#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  vector<string> words;
  
  int N = S.size();

  for (int i = 0; i < N;) {
    int j = i + 1;
    while (j < N && islower(S[j])) j++;

    string word = S.substr(i, j + 1 - i);

    word[0] = tolower(word[0]);
    word.back() = tolower(word.back());

    words.push_back(word);

    i = j + 1;
  }
  sort(words.begin(), words.end());

  string result = "";
  for (auto word : words) {
    word[0] = toupper(word[0]);
    word.back() = toupper(word.back());

    result += word;
  }

  cout << result << endl;
}
