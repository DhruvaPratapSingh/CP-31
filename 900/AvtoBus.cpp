#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
     while(n--){
        long long t;
        cin>>t;
        if(t<4 || t%2!=0){
            cout<<-1<<endl;
            continue;
        }
        long long mini=0,maxi=1e18+1;
        if(t%6==0){
            mini=t/6;
        }
        else {
            long long val=(t-4)%6;
            long long multof4=(4+val)/4;
            mini=(t-4)/6+multof4;
        }
        if(t%4==0){
            maxi=t/4;
        }
        else{
           maxi=(t-6)/4+1;
        }
        if(mini==0 || maxi==0){
            cout<<-1<<endl;
            continue;
        }
        cout<<mini<<" "<<maxi<<endl;
       
     }
    return 0;
}