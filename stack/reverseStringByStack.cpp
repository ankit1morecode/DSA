#include <bits/stdc++.h>
using namespace std;
template<class T>
class Stack{
    vector<T> v;
public:
    void push(T val){
        v.push_back(val);
    }
    void pop(){
        if(v.empty()){
            cout << "Stack is Empty" << endl;
            return;
        }
        v.pop_back();
    }
    T top(){
        if (v.empty()){
            cout << "Stack is empty\n";
            return (T)-1;
        }
        int n = v.size();
        return v[n-1];
    }
    bool empty(){
        return v.empty();
    }
    int size(){
        return v.size();
    }
    void print(){
        for(T val:v){
            cout << val << " ";
        }
        cout << endl;
    }
};

int main(){
    Stack<char> st;
    string s = "abcd";
    for(int i=0; i<s.length(); i++){
        st.push(s[i]);
    }
    for(int i=0; i<s.length(); i++){
        s[i]=st.top();
        st.pop();
    }
    cout << s << endl;
 return 0;
}