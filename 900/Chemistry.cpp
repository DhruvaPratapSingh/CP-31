// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     int n;
//     cin >> n;
//     while(n--){
//         int a,k;
//         cin>>a>>k;
//         string s;
//         cin>>s;
//         unordered_map<char,int>m;
//         for(auto ch:s)m[ch]++;
//         int cntsinglechar=0;
//          priority_queue<int,vector<int>,greater<int>>pq;
//         for(auto ch:m){
//             int val=ch.second;
//             if(val%2==1)pq.push(val-1);
//             else pq.push(val);
//             if(ch.second%2==1){
//                 cntsinglechar++;
//             }
//         }
//         if(abs(cntsinglechar-k)<=1){
//             cout<<"Yes"<<endl;
//             continue;
//         }
//        if(cntsinglechar-k>1){
//         cout<<"No"<<endl;
//         continue;
//        }
//        int rem=k-cntsinglechar;
//       while(rem > 0 && !pq.empty()){
//     int x = pq.top();
//     pq.pop();

//     if(x == 0) continue;   // avoid infinite loop

//     if(rem >= x){
//         rem -= x;
//     }else{
//         pq.push(x - rem);
//         rem = 0;
//     }
// }
//        int cnt=0;
//        while(!pq.empty()){
//         if(pq.top()%2==1)cnt++;
//         pq.pop();
//        }
//        if(cnt>1)cout<<"No"<<endl;
//        else cout<<"Yes"<<endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<int> freq(26, 0);
        for (char c : s) freq[c - 'a']++;

      int odd = 0;
        for (int x : freq)
            odd += (x & 1);

        cout << (odd <= k + 1 ? "YES" : "NO") << '\n';
    }
}