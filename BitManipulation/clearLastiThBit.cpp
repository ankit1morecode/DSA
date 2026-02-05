#include <bits/stdc++.h>
using namespace std;
int clearIBits(int val,int i){
    val = val & ((~0)<<i);
    return val;
}
int main(){
   cout << clearIBits(15,2);
 return 0;
}