
// #include <bits/stdc++.h>
// using namespace std;

// const int MOD = 1e9 + 7;

// int solve(int i, int j, int n, vector<string>& grid) {
//     // Out of bounds
//     if (i >= n || j >= n) {
//         return 0;
//     }

//     // Trap cell
//     if (grid[i][j] == '*') {
//         return 0;
//     }

//     // Destination reached
//     if (i == n - 1 && j == n - 1) {
//         return 1;
//     }

//     // Move down or right
//     int down = solve(i + 1, j, n, grid);
//     int right = solve(i, j + 1, n, grid);

//     return (down + right) % MOD;
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<string> grid(n);
//     for (int i = 0; i < n; i++) {
//         cin >> grid[i];
//     }

//     cout << solve(0, 0, n, grid) << '\n';

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n;
    cin >> n;

    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    vector<vector<int>> dp(n, vector<int>(n, 0));

    // Starting cell
    if (grid[0][0] == '*') {
        cout << 0 << '\n';
        return 0;
    }

    dp[0][0] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Cannot enter a trap
            if (grid[i][j] == '*') {
                dp[i][j] = 0;
                continue;
            }

            if (i > 0) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
            }

            if (j > 0) {
                dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
            }
        }
    }

    cout << dp[n - 1][n - 1] << '\n';

    return 0;
}
