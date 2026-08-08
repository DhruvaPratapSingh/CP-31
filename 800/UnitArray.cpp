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
        vector<int> arr(k);
        
        for(int i=0;i<k;i++){
            cin>>arr[i];
        }
        int neg=0,pos=0;
        for(int i=0;i<k;i++){
            if(arr[i]<0) neg++;
            else pos++;
        }
            int cnt=0;
            while(neg%2!=0 || pos<neg){
                pos++;
                neg--;
                cnt++;
            }
            cout<<cnt<<endl;
    }
    return 0;
}