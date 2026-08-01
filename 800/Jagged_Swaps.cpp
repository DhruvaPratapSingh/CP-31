#include <bits/stdc++.h>
using namespace std;
bool isSorted(vector<int> &arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
// main catch here is that if first element is not the minimum then we cannot sort the array by jagged swaps. Also if the maximum element is greater than the size of the array then also we cannot sort the array by jagged swaps.
    int n;
    cin >> n;
    while(n--){
        int t;
        cin>>t;
        vector<int> arr(t);
        for(int i=0;i<t;i++)cin>>arr[i];
        int maxi=*max_element(arr.begin(),arr.end());
        if(maxi>t){cout<<"NO"<<endl;continue;}
        if(isSorted(arr)){
        cout<<"YES"<<endl;continue;}
        int mini=*min_element(arr.begin(),arr.end());
        if(arr[0]!=mini)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
       
    }
    return 0;
}