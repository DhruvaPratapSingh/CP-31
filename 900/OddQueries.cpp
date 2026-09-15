#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while(n--){
        int t,q;
        cin>>t>>q;
        vector<int>vec(t);
        for(int i=0;i<t;i++)cin>>vec[i];
        vector<long long>presum(t+1,0);
        for(int i=1;i<=t;i++){
            presum[i]=vec[i-1]+presum[i-1];
            // cout<<presum[i]<<" <- pre"<<endl;
        }
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
           long long rangesum=presum[r]-presum[l-1];
        //    cout<<"rang"<<rangesum<<endl;
           long long temp=presum[t]-rangesum+1LL*(r-l+1)*k;
            if(temp%2==1){
                cout<<"Yes"<<endl;
            }
            else cout<<"No"<<endl;
        }
    }
    return 0;
}