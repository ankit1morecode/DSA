#include <bits/stdc++.h>
using namespace std;
int clearBit(int num,int i){
    int bitMask = ~(1<<i);
    return num&bitMask;
}
int main(){
    int num,i; cin>>num>>i;
    cout << clearBit(num,i);
 return 0;
}