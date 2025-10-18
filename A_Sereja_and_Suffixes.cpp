#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> arr(n+2);
    for (int i = 1;i<= n;i++) 
        cin >> arr[i];

    vector<int> dp(n + 2, 0); 
    unordered_map<int, bool> result;

    for (int i=n;i >= 1;i--) {
        if (!result[arr[i]]) {
            dp[i] = dp[i + 1] + 1;
            result[arr[i]] = true;
        } else {
            dp[i] = dp[i + 1];
        }
    }
    while (m--) {
        int e;
        cin >> e;
        cout << dp[e] << "\n";
    }

    return 0;
}
