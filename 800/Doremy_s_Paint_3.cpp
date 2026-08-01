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
        vector<int>arr(t);
        for(int i=0;i<t;i++)cin>>arr[i];
        unordered_map<int,int>m;
        for(int ele:arr)m[ele]++;
        if(m.size()<2) cout<<"Yes"<<endl;
        if(m.size()==2){
            int a=-1,b=0;
            for(auto ele:m){
                if(a==-1)a=ele.second;
                else b=ele.second;
            }
            if(a-b==0 || abs(a-b)==1)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        if(m.size()>2)cout<<"No"<<endl;

    }
    return 0;
}