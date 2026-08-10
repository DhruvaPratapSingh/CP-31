#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
     while(n--){
        int t;
        cin>>t;
        string s;
        cin>>s;
        int i=0,j=t-1;
        while(i<=j){
          if(s[i]=='0' and s[j]=='1'){
            i++;
            j--;
          }
          else if(s[i]=='1' and s[j]=='0'){
            i++;
            j--;
          }
          else break;
        }
        cout<<j-i+1<<endl;
     }
    return 0;
}