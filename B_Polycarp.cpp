#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0;i<n;i++) 
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    int count = 1;
    for (int i=0;i<n;i++) {
        if (arr[i] >= count) {
            count++;
        }
    }
    int ans = count - 1;
    cout << ans << "\n";
    return 0;
}
