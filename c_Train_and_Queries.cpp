#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        int h, e;
        cin >> h >> e;
        vector<int> v(h);
        map<int,int> f_val, l_val;
        for (int i = 0; i<h;i++) {
            cin >> v[i];
            if (f_val.find(v[i]) == f_val.end()) 
                f_val[v[i]] = i;
            l_val[v[i]] = i;
        }
        while (e--) {
            int a, b;
            cin >> a >> b;
            if (f_val.find(a) == f_val.end() || f_val.find(b) == f_val.end()) {
                cout << "NO\n";
            } else {
                cout << (f_val[a] <= l_val[b] ? "YES" : "NO") << "\n";
            }
        }
    }

    return 0;
}
