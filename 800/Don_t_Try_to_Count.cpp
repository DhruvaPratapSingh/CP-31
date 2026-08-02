#include <bits/stdc++.h>
using namespace std;
int helper(string &s,string &t){
    int n=s.size(),m=t.size();
     if(s.find(t)!=string::npos)return 0;
    int cnt=1;
    s+=s;
    while(s.size()<2*m){
        if(s.find(t)!=string::npos)return cnt;
        s+=s;
        cnt++;
        // cout<<s<<" "<<cnt<<endl;
    }
    
    if(s.find(t)==string::npos)return -1;
    return cnt;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
// a aa aaaa aaaaaaaa
// aaaaa
    int n;
    cin >> n;
    while(n--){
        int a,b;
        string s,t;
        cin>>a>>b;
        cin>>s>>t;
        
        int ans=helper(s,t);
        cout<<ans<<endl;
    }
    return 0;
}