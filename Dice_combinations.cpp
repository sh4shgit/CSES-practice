#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> dice;
    dice = {1,2,3,4,5,6};

    const int MOD = 1e9 + 7;
    vector<int> dp(n + 1);

    dp[0] = 1;

    for (int s = 1; s <= n; s++) {
        for (int d : dice) {
            if (s >= d) {
                dp[s] += dp[s - d];
                if (dp[s] >= MOD) dp[s] -= MOD;
            }
        }
    }

    cout << dp[n];
}