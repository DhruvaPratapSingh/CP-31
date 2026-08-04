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
        vector<int>arr(a);
        for(int i=0;i<a;i++)cin>>arr[i];
        vector<int>ans;
        ans.push_back(arr[0]);
        for(int i=1;i<a;i++){
           if(arr[i-1]>arr[i]){
            ans.push_back(arr[i]);
            ans.push_back(arr[i]);
           }
         else ans.push_back(arr[i]);
        }
        cout<<ans.size()<<endl;
        for(int ele:ans)cout<<ele<<" ";
        cout<<endl;
    }
    return 0;
}