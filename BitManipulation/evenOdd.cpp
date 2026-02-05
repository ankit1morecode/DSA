#include <bits/stdc++.h>
using namespace std;
bool isEven(int val){
    if(val&1)return true;
    else return false;
}
int main(){
    int n;
    cin >> n;
    bool ans = isEven(n);
    ans?cout << "Odd" : cout << "Even";
 return 0;
}