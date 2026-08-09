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
       
        for(int i=0;i<k;i++){
            cout<<k+1-vec[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}