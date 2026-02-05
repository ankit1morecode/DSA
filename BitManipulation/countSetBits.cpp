#include <bits/stdc++.h>
using namespace std;
int countSetBit(int val){
    int ans = 0;
    while(val>0){
        ans += val&1;
        val = val>>1;
    }
    return ans;
}
int main(){
    cout << countSetBit(10);
    return 0;
}