#include <bits/stdc++.h>
using namespace std;

string postfixToinfix(string s){
    stack<string> st;
    for(int i = s.size()-1; i>=0; i--){
        char c = s[i];
        if(isalnum(c))st.push(string(1,c));
        else{
            string c1 = st.top();
            st.pop();
            string c2 = st.top();
            st.pop();
            string ans = "(" + c1 + c + c2 +")";
            st.push(ans);
        }
    }
    return st.top();
}

int main(){
    string s = "+a*b-^cde";
    cout << postfixToinfix(s);
    return 0;
}