#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while(n--){
        int k,x;
        cin>>k>>x;
        if(k%x==0){
            cout<<2<<endl;
            cout<<k-x+1<<" "<<x-1<<endl;
        }
        else{
            cout<<1<<endl;
            cout<<k<<endl;
        }
    }
    return 0;
}