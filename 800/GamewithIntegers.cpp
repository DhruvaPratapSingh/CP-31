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
        if(t%3==0)cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
    return 0;
}