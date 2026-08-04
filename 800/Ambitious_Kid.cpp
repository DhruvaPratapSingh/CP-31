#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
vector<int>arr(n);
for(int i=0;i<n;i++)cin>>arr[i];
int mini=1e9;
for(int ele:arr){
    mini=min(mini,abs(ele));
}
cout<<mini<<" ";
    return 0;
}