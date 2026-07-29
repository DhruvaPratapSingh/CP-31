#include <bits/stdc++.h>
using namespace std;
bool issorted(vector<int>& arr){
    for(int i=1;i<arr.size();i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}
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
    if(issorted(arr)){
        cout<<"YES"<<endl;
    }
    else{
        reverse(arr.begin(),arr.begin()+b);
        if(issorted(arr)){
            cout<<"YES"<<endl;
        }
        else{
            reverse(arr.begin(),arr.begin()+b);
            reverse(arr.begin()+b,arr.end());
            if(issorted(arr)){
                cout<<"YES"<<endl;
            }
                else{
            cout<<"NO"<<endl;
        }
    }
   }
}
    return 0;
}