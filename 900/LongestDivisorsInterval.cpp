#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

         if(n&1){ 
        cout<<1<<endl;
        continue;
    }
        int factor = 1, cnt = 0;
   while(n % factor == 0){
    factor ++;
    cnt ++;
   }

   cout<<cnt<<endl;
    }
}