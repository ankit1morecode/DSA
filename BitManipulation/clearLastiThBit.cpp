#include <bits/stdc++.h>
using namespace std;
int clearIBits(int val,int i){
    return val & ((~0)<<i);
}
int main(){
   cout << clearIBits(15,2);
 return 0;
}