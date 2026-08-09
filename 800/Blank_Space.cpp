#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
   while(n--){
        int k;
        cin>>k;
        vector<int>vec(k);
        for(int i=0;i<k;i++){
            cin>>vec[i];
        }
       
        int maxi=0,cnt=0;
        for(int i=0;i<k;i++){
            if(vec[i]==0)cnt++;
            else cnt=0;
            maxi=max(maxi,cnt);
        }
        cout<<maxi<<"\n";
    }
    return 0;
}