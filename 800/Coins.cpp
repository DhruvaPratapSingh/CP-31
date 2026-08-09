#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while(n--){
        long long n,k;
        cin>>n>>k;
       if(n%2==0)cout<<"Yes"<<endl;
       else if(k%2==1 and n>=k)cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
    }
    return 0;
}