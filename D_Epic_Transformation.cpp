#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int,int> freq;
        int mx = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            freq[arr[i]]++;
            mx = max(mx, freq[arr[i]]);
        }
        int ans = max(2*mx - n, n % 2);
        cout << ans << "\n";
    }

    return 0;
}
