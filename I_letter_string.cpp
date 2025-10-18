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
        vector<string> ss(n);
        for (int i = 0;i<n;i++) 
            cin >> ss[i];

        long long result = 0;
        map<string, long long> freq;
        for (auto &x : ss) {
            for (char c = 'a'; c <= 'k'; c++) {
                if (c != x[0]) {
                    string tmp = x;
                    tmp[0] = c;
                    result += freq[tmp];
                }
                if (c != x[1]) {
                    string tmp = x;
                    tmp[1] = c;
                    result += freq[tmp];
                }
            }
            freq[x]++; 
        }
        cout << result << '\n';
    }
}
