#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for (int &c : coins) cin >> c;

    const int MOD = 1e9 + 7;
    vector<int> dp(x + 1);

    dp[0] = 1;

    for (int s = 1; s <= x; s++) {
        for (int c : coins) {
            if (s >= c) {
                dp[s] += dp[s - c];
                if (dp[s] >= MOD) dp[s] -= MOD;
            }
        }
    }

    cout << dp[x];
}