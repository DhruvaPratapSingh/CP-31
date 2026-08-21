#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long xK, yK, xQ, yQ;
        cin >> xK >> yK;
        cin >> xQ >> yQ;

        vector<pair<long long, long long>> moves = {
            {a, b},
            {a, -b},
            {-a, b},
            {-a, -b},
            {b, a},
            {b, -a},
            {-b, a},
            {-b, -a}
        };

        set<pair<long long, long long>> kingPositions;
        set<pair<long long, long long>> queenPositions;

        for (auto ele : moves) {
            int dx=ele.first;
            int dy=ele.second;
            kingPositions.insert({xK + dx, yK + dy});
            queenPositions.insert({xQ + dx, yQ + dy});
        }

        int ans = 0;

        for (auto pos : kingPositions) {
            if (queenPositions.count(pos))
                ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}