#include <bits/stdc++.h>
using namespace std;

bool isalnum1(char c){
    if((c >= 'a' && c <= 'z') ||
       (c >= 'A' && c <= 'Z') ||
       (c >= '0' && c <= '9'))
        return true;

    return false;
}

int priority(char c){
    if(c == '^') return 3;
    if(c == '*' || c == '/') return 2;
    if(c == '+' || c == '-') return 1;
    return 0;
}

string infixToPrefix(string s){
    reverse(s.begin(),s.end());
    for(char &c : s){
        if(c=='(')c=')';
        else if(c==')')c='(';
    }
    stack<char> st;
    string ans = "";
    for(char c : s){
        if(isalnum1(c))ans+=c;
        else if(c=='(')st.push(c);
        else if(c==')'){
            while(!st.empty() && st.top()!='('){
                ans+=st.top();
                st.pop();
            }
            if(!st.empty())st.pop();
        }else{
            while(!st.empty() && priority(st.top()) > priority(c)){
                ans+=st.top();
                st.pop();
            }
            st.push(c);
        }
    }  
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    } 
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    string s = "a+b*(c^d-e)";
    string s2 = "f+d-c*(b+a)";
    cout << infixToPrefix(s2);
    return 0;
}