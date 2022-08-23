#include <bits/stdc++.h>
using namespace std;
#define rep(i, j, n) for (int i = j; i < (int)(n); i++)

int N, M;
bool solved[101010];
int wa[101010];
//---------------------------------------------------------------------------------------------------
int main() {
    cin >> N >> M;

    rep(i, 0, M) {
        int p; string s; cin >> p >> s;
        p--;

        if (s == "WA" and !solved[p]) wa[p]++;
        if (s == "AC") solved[p] = true;
    }

    int correct = 0, penalty = 0;
    rep(i, 0, N) if (solved[i]) {
        correct++;
        penalty += wa[i];
    }

    cout << correct << " " << penalty << endl;
}