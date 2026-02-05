#include <bits/stdc++.h>
using namespace std;
void perm(string s,string ans){
    int n = s.size();
    if(n==0){
        cout << ans << " ";
        return;
    }
    for(int i=0; i<n; i++){
        char ch  = s[i];
        string newStr = s.substr(0,i)+s.substr(i+1,n-i-1);
        perm(newStr,ans+ch);
    }
}
int main(){
    string s = "abc";
    string ans = "";
    perm(s,ans);
 return 0;
}