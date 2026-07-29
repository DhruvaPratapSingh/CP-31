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
        int maxi=0;
        for(int i=0;i<a-1;i++){
                maxi=max(maxi,arr[i+1]-arr[i]);
        }
        // diffrenece between the x and last element if double of diffrenece is greater than maxi then tha answer will be maxi otherwise it will be the difference between the x and last element
        maxi=max(maxi,2*(b-arr[a-1]));
        maxi=max(maxi,arr[0]-0);
        cout<<maxi<<endl;
    }
    return 0;
}