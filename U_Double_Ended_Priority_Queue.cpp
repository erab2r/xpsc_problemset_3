#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;
    map<long long, int> mp;
    for (int i = 0; i<n; i++) {
        long long x;
        cin >> x;
        mp[x]++;
    }

    while (t--) {
        int cmd;
        cin >> cmd;

        if (cmd == 0) {
            long long x;
            cin >> x;
            mp[x]++;
        } 
        else if (cmd == 1) { 
            auto it = mp.begin(); 
            cout << it->first << "\n";
            if (--it->second == 0) 
                mp.erase(it);
        } 
        else if (cmd == 2) { 
            auto it = prev(mp.end()); 
            cout << it->first << "\n";
            if (--it->second == 0) 
                mp.erase(it);
        }
    }

    return 0;
}
