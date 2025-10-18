#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    set<int> s;
    while (q--) {
        int cmd, e;
        cin >> cmd >> e;

        if (cmd == 1) {
            s.insert(e); 
        } 
        else if (cmd == 2) {
            s.erase(e); 
        } 
        else if (cmd == 3) {
            if (s.find(e) != s.end()) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }

    return 0;
}
