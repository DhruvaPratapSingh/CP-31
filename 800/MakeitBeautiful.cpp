#include <bits/stdc++.h>
using namespace std;
int helper(int t,vector<int>&vec){
    int sum=vec[0];
    for(int i=1;i<t;i++){
            if(vec[i]==sum){
               return -1;
            }
            else sum+=vec[i];
        }
        return sum;
}
void print(vector<int>&vec){
            cout<<"Yes"<<endl;
            for(int ele:vec){
                cout<<ele<<" ";
            }
            cout<<endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while(n--){
        int t;
        cin>>t;
        vector<int>vec(t);
        for(int i=0;i<t;i++)cin>>vec[i];
        int tsum=accumulate(vec.begin(),vec.end(),0);
        int sum=helper(t,vec);
        if(sum==tsum){
            print(vec);
            continue;
        }
        sort(vec.begin(),vec.end(),greater<int>());
        swap(vec[1],vec[t-1]);
        sum=helper(t,vec);
        if(sum==-1){
            cout<<"No"<<endl;
            continue;
        }
        else{
             print(vec);
        }
    }
    return 0;
}