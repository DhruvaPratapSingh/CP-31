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
    vector<int>vec(a);
    for(int i=0;i<a;i++)cin>>vec[i];
    int mini=*min_element(vec.begin(),vec.end());
    vector<int>b,c;
    // b.push_back(mini);
    for(int i=0;i<a;i++){
        if(mini==vec[i])b.push_back(vec[i]);
        else c.push_back(vec[i]);
    }
    if(c.size()==0){
        cout<<-1<<endl;
       
    }
    else{
     cout<<b.size()<<" "<<c.size()<<endl;
     for(int ele:b)cout<<ele<<" ";
        cout<<endl;
        for(int ele:c)cout<<ele<<" ";
        cout<<endl;
    }
   }
    return 0;
}