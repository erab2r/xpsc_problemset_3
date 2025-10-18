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
        vector<int> nums;
        for(int i = 1; i <= n; ++i) nums.push_back(i);

        vector<pair<int,int>> ops;
        int current = n;

        // Start combining from n down to 2
        for(int i = n-1; i >= 1; --i) {
            ops.push_back({i, current});
            current = (current + i + 1)/2; // ceil((current+i)/2)
        }

        cout << current << "\n";
        for(auto &p : ops) cout << p.first << " " << p.second << "\n";
    }
}
