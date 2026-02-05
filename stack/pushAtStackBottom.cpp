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
void atBottom(Stack<int>& st,int val){
    if(st.empty()){
        st.push(val);
        return;
    }
    int top = st.top();
    st.pop();
    atBottom(st,val);
    st.push(top);
}
int main(){
    Stack<int> st;
    st.push(3);
    st.push(2);
    st.push(1);
    atBottom(st,4);
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
 return 0;
}