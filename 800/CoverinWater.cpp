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
        string s;
        cin>>s;
        int cnt=0;
           int maxi=0;
           for(auto ch:s){
                if(ch=='.')cnt++;
                else {
                    maxi=max(maxi,cnt);
                    cnt=0;
                }
            }
             maxi=max(maxi,cnt);
            if(maxi>=3){
                cout<<2<<endl;
            }
            else if(maxi==0){cout<<0<<endl;}
            else{
                cnt=0;
                 for(int i=0;i<t;i++){
                if(s[i]=='.')cnt++;
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}