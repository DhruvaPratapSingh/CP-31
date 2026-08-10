#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
        while(t--){
int n;
cin>>n;
        

    vector<long long> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
int m=0;
for(int ele:vec){
    if(ele==2)m++;
}
if(m%2==1){
    cout<<-1<<endl;
    continue;
}
if(m==0){
    cout<<1<<endl;
    continue;
}
   int m2=0,idx=-1;
   for(int i=0;i<n;i++){
    if(vec[i]==2)m2++;
    if(m2==(m/2)){
        idx=i+1;
        break;
    }
   }
    cout << idx<<endl;
}
    return 0;
}