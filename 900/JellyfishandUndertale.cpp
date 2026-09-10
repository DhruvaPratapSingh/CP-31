#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while(n--){
        long long a,b,c;
        cin>>a>>b>>c;
        vector<int>vec(c);
        long long ans=b-1;
        long long cnt=1;
        for(int i=0;i<c;i++){
            cin>>vec[i];
            ans=ans+min(cnt+vec[i],a)-1;
        }
        cout<<ans+1<<"\n";
    }
    return 0;
}