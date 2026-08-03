#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while(n--){
        int a,b;
        cin>>a>>b;
        vector<int>vec(a);
        for(int i=0;i<a;i++)cin>>vec[i];
        auto itr=find(vec.begin(),vec.end(),b);
        if(itr==vec.end())cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}