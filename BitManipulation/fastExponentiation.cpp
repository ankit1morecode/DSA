#include <bits/stdc++.h>
using namespace std;
int powE(int x, int n){
    int ans = 1;
    while(n > 0){
        int lastBit = n & 1;
        if(lastBit){
            ans *= x;
        }
        x=x*x;
        n = n>>1;
    }
    return ans;
}
int main(){
    cout << powE(2, 3);
    return 0;
}