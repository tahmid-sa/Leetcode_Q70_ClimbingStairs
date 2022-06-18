#include <iostream>
#include <vector>

using namespace std;

int climbStairs(int n) {
    //Recursion

    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;

    return climbStairs(n - 1) + climbStairs(n - 2);
}

int climbStairsDP(int n) {
    if (n == 1) {
        return 1;
    }

    vector<int> dp(n + 1);

    dp[0] = 0; dp[1] = 1; dp[2] = 2;

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main()
{
    int n = 4;

    cout << climbStairs(n) << endl;

    cout << climbStairsDP(n);

    return 0;
}