#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);

        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (p[i] != i + 1) {
                ans = gcd(ans, abs(p[i] - (i + 1)));
            }
        }

        cout << ans << '\n';
    }

    return 0;
}