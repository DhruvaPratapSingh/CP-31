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
        if(vec[0]==1)vec[0]=2;
        for(int i=1;i<t;i++){
            if(vec[i]==1)vec[i]=2;
            if(vec[i]%vec[i-1]==0){
                cout<<vec[i-1]<<" ";
                vec[i]+=1;
            }
            else cout<<vec[i-1]<<" ";
        }
        cout<<vec[t-1]<<endl;
        
    }
    return 0;
}