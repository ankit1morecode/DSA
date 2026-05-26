#include <bits/stdc++.h>
using namespace std;
int setBit(int num,int i){
    int bitMask = 1<<i;
    return num|bitMask;                     
}                                                    
int main(){
    int num,i; cin>>num>>i;
    cout << setBit(num,i);
 return 0;
}
