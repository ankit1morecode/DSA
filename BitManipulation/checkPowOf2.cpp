#include <bits/stdc++.h>
using namespace std;
bool isOfPow2(int val){
    return !(val & (val-1));
}
int main(){
    int val; cin >> val;
    isOfPow2(val)?cout << "YES" : cout << "NO";
 return 0;
}