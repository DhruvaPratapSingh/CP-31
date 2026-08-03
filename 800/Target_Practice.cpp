#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
      while(n--){
        vector<vector<char>>grid(10,vector<char>(10));
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>grid[i][j];
            }
        }
        int ans=0;
        for(int i=0;i<5;i++){
            int cnt=0;
            for(int j=i;j<10-i;j++){
                if(grid[i][j]=='X'){
                    grid[i][j]='O';
                    cnt++;
                }
                if(grid[9-i][j]=='X'){cnt++;
                    grid[9-i][j]='O';
                }
                if(grid[j][i]=='X'){    
                    grid[j][i]='O';
                    cnt++;
                }
                if(grid[j][9-i]=='X'){      
                grid[j][9-i]='O';
                        cnt++;
                }
            }
            // cout<<cnt<<" "; 
            // 40+32*2+24*3+16*4+8*5
            ans+=(i+1)*cnt;
        }
        cout<<ans<<endl;
      }
    return 0;
}