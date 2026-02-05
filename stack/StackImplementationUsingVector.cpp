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
    Stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.print();
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
 return 0;
}