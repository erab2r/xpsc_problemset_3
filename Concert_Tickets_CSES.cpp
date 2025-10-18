#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    map<long long, int> mp;
    for (int i = 0; i < n; i++) {
        long long p;
        cin >> p;
        mp[p]++;
    }
    for (int i = 0; i < m; i++) {
        long long mx_p;
        cin >> mx_p;
        auto it = mp.upper_bound(mx_p);
        if (it == mp.begin()) {
            cout << -1 << "\n";
        } else {
            --it; 
            cout << it->first << "\n";
            it->second--;
            if (it->second == 0) 
                mp.erase(it);
        }
    }

    return 0;
}
