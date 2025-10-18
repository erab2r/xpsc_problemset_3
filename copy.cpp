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
        for (int i=0;i<n;i++) 
            cin >> arr[i];

        unordered_set<int> us;
        for (int i=0;i<n;i++) {
            us.insert(arr[i]);
        }
        cout << us.size() << "\n";
    }
    return 0;
}
