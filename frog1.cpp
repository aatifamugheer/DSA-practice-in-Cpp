
#include <bits/stdc++.h>
using namespace std;

int solve(int i, vector<int>& h) {
    if (i == 0) {
        return 0;
    }

    int oneJump = solve(i - 1, h) + abs(h[i] - h[i - 1]);

    int twoJumps = INT_MAX;
    if (i > 1) {
        twoJumps = solve(i - 2, h) + abs(h[i] - h[i - 2]);
    }

    return min(oneJump, twoJumps);
}

int main() {
    int n;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    cout << solve(n - 1, h) << endl;

    return 0;
}
