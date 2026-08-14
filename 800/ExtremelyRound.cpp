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
        if(t<=10){
            cout<<t<<endl;
            continue;
        }
        int cnt=0;
        for(int d=1;d<=9;d++){
            int num=d;
            while(num<=t){
                cnt++;
                num*=10;
            }
        }
        cout<<cnt<<endl;
     }
    return 0;
}