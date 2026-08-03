#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
 while(n--){
    int a;
    cin>>a;
    
    vector<int> arr(a-1);
    for(int i=0;i<a-1;i++){
        cin>>arr[i];
    }
    int sum=accumulate(arr.begin(),arr.end(),0);
    cout<<(-sum)<<endl;
 }
    return 0;
}