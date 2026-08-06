#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while(n--){
        int t;
        cin>>t;
        vector<int>vec(t);
        for(int i=0;i<t;i++)cin>>vec[i];
        int sum=accumulate(vec.begin(),vec.end(),0);
        if(sum%2==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}