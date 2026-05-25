#include <bits/stdc++.h>
using namespace std;

template<class T>class Stack{
    list<T> ll;
public:
    void push(T val){
        ll.push_front(val);
    }
    void pop(){
        ll.pop_front();
    }
    T top(){
        return ll.front();
    }
    int size(){
        return ll.size();
    }
    bool empty(){
        return ll.empty();
    }
};

int main(){
    Stack<int> st;
    st.push(3);
    st.push(2);
    st.push(1);
    cout << st.size() << endl;
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }cout << endl;
 return 0;
}