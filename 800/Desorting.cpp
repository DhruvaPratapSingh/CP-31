#include <bits/stdc++.h>
using namespace std;
bool issorted(vector<int>&arr){
    for(int i=1;i<arr.size();i++){
        if(arr[i]<arr[i-1])return false;
    }
    return true;
}
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
        if(t<2 || !issorted(arr)){
            cout<<0<<"\n";
            continue;
        }
        int mini=1e9;
        int a,b;
        for(int i=1;i<t;i++){
            if(mini>abs(arr[i]-arr[i-1])){
                mini=abs(arr[i]-arr[i-1]);
                a=arr[i-1];
                b=arr[i];
            }
        }
        if(a==b)cout<<1<<"\n";
        else cout<<(abs(b-a)/2)+1<<"\n";
    }
    return 0;
}