#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for (int &c : coins) cin >> c;

    //const int MOD = 1e9 + 7;
    vector<int> dp(x + 1,1e9);

    dp[0] = 0;

    for (int s = 1; s <= x; s++) {
        for (int c : coins) {
            if (s >= c) {
                dp[s] = min(dp[s - c]+1,dp[s]);
            }
        }
    }
    if(dp[x] == 1e9) cout << -1;
    else cout << dp[x];
}