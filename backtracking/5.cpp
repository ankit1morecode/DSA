#include <bits/stdc++.h>
using namespace std;
int gridWays(int row,int col,int n,int m,string ans){
    if(row==n-1 && col ==m-1){
        cout << ans << endl;
        return 1;
    }
    if(row>=n || col >=m){
        return 0;
    }
    return gridWays(row,col+1,n,m,ans+'R')+gridWays(row+1,col,n,m,ans+'D');
}
int main(){
    string ans = "";
    cout << gridWays(0,0,4,3,ans);
 return 0;
}