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
        int mini=1000,maxi=0;
        for(int i=0;i<t;i++){
            cin>>vec[i];
            maxi=max(maxi,vec[i]);
            mini=min(mini,vec[i]);
        }
        int a=maxi-vec[0];
        int b=vec[t-1]-mini;
        int ans= max(a,b);
        int res=0;
        for(int i=0;i<t-1;i++){
            ans=max(ans,vec[i]-vec[i+1]);
        }
         cout<<ans<<endl;
     }
    return 0;
}