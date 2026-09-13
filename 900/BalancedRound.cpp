#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while(n--){
        int t,k;
        cin>> t >> k;
        vector<int>vec(t);
        for(int i=0;i<t;i++){
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        int cnt=0;
        int i=0,j=1;
        while(j<t){
            if(vec[j]-vec[j-1]<=k){
                j++;
            }
            else{
                cnt=max(cnt,j-i);
                i=j;
                j++;
            }
        }
        cnt=max(cnt,j-i);
        cout<<t-cnt<<endl;
    }
    return 0;
}