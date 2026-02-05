#include <bits/stdc++.h>
using namespace std;
void solve(int n,int a,int b){
    if(n==0)return;
    cout << a << " ";
    solve(n-1,b,a+b);
}
int main(){
    solve(9,0,1);
 return 0;
}