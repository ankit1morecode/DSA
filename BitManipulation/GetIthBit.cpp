#include <bits/stdc++.h>
using namespace std;
int getBit(int val,int i){
    int n = 1<<i;       //left shift to get bitMask
    if(val&n)return 1; 
    else return 0;
}
int main(){
    int n,i; cin >> n>>i ;
    int ans = getBit(n,i);
    cout << ans << endl;
 return 0;
}