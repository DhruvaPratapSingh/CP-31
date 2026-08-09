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
    for(int i=0;i<k;i++)cin>>vec[i];
    int xori=0;
    for(int ele:vec){
        xori^=ele;
    }
    if(k%2==0 and xori!=0)cout<<-1<<endl;
    else {
        cout<<xori<<endl;
    }
}
    return 0;
}