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
        for(int i=0;i<k;i++)cin>>vec[i];
        bool flag=0;
        for(int i=0;i<k-1;i++){
            for(int j=i+1;j<k;j++){
                if(__gcd(vec[i],vec[j])<=2){
                    flag=1;
                    break;
                }
            }
        }
       if(flag)cout<<"Yes"<<endl; 
       else cout<<"No"<<endl;       
    }
    return 0;
}