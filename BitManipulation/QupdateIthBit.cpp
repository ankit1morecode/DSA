#include <bits/stdc++.h>
using namespace std;
int updateBit(int val,int i,int bit){
    int bitMask = ~(1<<i);
    val = val&bitMask;
    if(bit==1){
        int bitMask2 = (1<<i);
        val = val|bitMask2;
    }
    return val;
}
int main(){
    int val,i,bit; cin >>val>>i>>bit;
    cout << updateBit(val,i,bit);
 return 0;
}