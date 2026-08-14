#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while(n--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        long long e = d - b;          // diagonal moves
        long long f = a + e - c;      // left moves

        if(b > d || f < 0) {
            cout << -1 << '\n';
            continue;
        }

        cout << e + f << '\n';
    }

    return 0;
}