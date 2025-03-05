#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

#define PRINT(x) (cout << x << "\n")

constexpr int MOD = 1e9 + 7;

int main() {
    int n;
    cin >> n;

    vector<int> dp(n+1,0);
    dp[0] = 1;
    
    for (int i = 0; i < n+1; i++) {
        for (int j = 1; j <= 6; j++) {
            if (i + j > n) continue;

            dp[i+j] = (dp[i+j] + dp[i]) % MOD;
        }
    }
    
    PRINT(dp[n]);

    return 0;
}