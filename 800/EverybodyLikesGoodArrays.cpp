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
       int cnt=0;
       for(int i=0;i<t-1;i++){
        if(vec[i]%2==vec[i+1]%2)cnt++;
       }
        cout<<cnt<<endl;
     }
    return 0;
}