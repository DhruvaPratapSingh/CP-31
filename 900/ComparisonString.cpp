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
        int cnt1=0,cnt2=0,maxi=0;
        for(char ch:s){
            if(ch=='<'){
                cnt1++;
            }
            else{
                maxi=max(maxi,cnt1);
                cnt1=0;
            }
            if(ch=='>'){
                cnt2++;
            }
            else{
                maxi=max(maxi,cnt2);
                cnt2=0; 
            }
        }
        maxi=max({maxi,cnt1,cnt2});
        cout<<maxi+1<<endl;
    }
    return 0;
}