#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        vector<int> first(n + 1, -1), last(n + 1, -1);
        for (int i = 1; i <= n; i++) {
            if (first[a[i]] == -1) first[a[i]] = i;
            last[a[i]] = i;
        }

        int cnt = 0;
        int max_last = 0;
        for (int i = 1; i <= n; i++) {
            max_last = max(max_last, last[a[i]]);
            if (i == max_last) cnt++;
        }

        cout << cnt << "\n";
    }
    return 0;
}
