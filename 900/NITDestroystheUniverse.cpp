#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;

        vector<int> vec(n);

        for (int i = 0; i < n; i++)
            cin >> vec[i];

        int segments = 0;

        for (int i = 0; i < n; i++) {
            if (vec[i] != 0 && (i == 0 || vec[i - 1] == 0))
                segments++;
        }

        if (segments == 0)
            cout << 0 << "\n";
        else if (segments == 1)
            cout << 1 << "\n";
        else
            cout << 2 << "\n";
    }
    return 0;
}