#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        bool found = false;
        for(int i = 1; i < n-1; i++) {
            int left = a[i-1], mid = a[i], right = a[i+1];
            if((mid > min(left, right)) && (mid < max(left, right))) {
                cout << i << " " << i+2 << "\n"; // 1-indexed
                found = true;
                break;
            }
        }
        if(!found) cout << -1 << "\n";
    }
    return 0;
}
