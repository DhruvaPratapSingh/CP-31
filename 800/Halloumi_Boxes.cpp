#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while(n--){
    int a,b;
    cin>>a>>b;
    vector<int> arr(a);
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
     int cnt=0;
     for(int i=0;i<a-1;i++){
         if(arr[i]>arr[i+1]){
             cnt++;
         }
     }
     if(cnt==0 || b>1){
         cout<<"YES"<<endl;
     }
     else{
         cout<<"NO"<<endl;
     }
}
    return 0;
}