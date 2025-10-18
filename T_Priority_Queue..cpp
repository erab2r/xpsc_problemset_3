#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<priority_queue<long long>> pq(n);

    while (q--) {
        int cmd, e;
        cin >> cmd >> e;

        if (cmd == 0) { 
            long long x;
            cin >> x;
            pq[e].push(x);
        } 
        else if (cmd == 1) { 
            if (!pq[e].empty()) {
                cout << pq[e].top() << "\n";
            }
        } 
        else if (cmd == 2) { 
            if (!pq[e].empty()) {
                pq[e].pop();
            }
        }
    }

    return 0;
}
