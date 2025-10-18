#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> ind(m);
        for (int i = 0; i < m; i++) cin >> ind[i];
        string c;
        cin >> c;

        // Count updates for each index
        vector<int> freq(n, 0);
        for (int i = 0; i < m; i++) freq[ind[i]-1]++;

        // Sort all update letters
        vector<char> updates(c.begin(), c.end());
        sort(updates.begin(), updates.end());

        int upd_idx = 0; // pointer to smallest available update
        for (int i = 0; i < n; i++) {
            while (freq[i] > 0 && upd_idx < m && updates[upd_idx] < s[i]) {
                s[i] = updates[upd_idx];
                freq[i]--;
                upd_idx++;
            }
        }

        cout << s << "\n";
    }

    return 0;
}
