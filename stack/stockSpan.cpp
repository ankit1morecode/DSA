#include <bits/stdc++.h>
using namespace std;

vector<int> stockSpan(vector<int>& v){
    vector<int> ans;
    stack<int> st;
    int n = v.size();
    for(int i=0; i<n; i++){
        while(!st.empty() && v[st.top()]<= v[i])st.pop();
        int span = !st.empty()?(i-st.top()):i+1;
        ans.push_back(span);

        st.push(i);
    }
    return ans;
}


int main(){
    vector<int> v = {100,80,60,70,60,75,85};
    vector<int> ans = stockSpan(v);
    for(int v:ans){
        cout << v << " ";
    }
 return 0;
}































































//  stack<int> st;

//     for(int i = 0; i < v.size(); i++){
//         while(!st.empty() && v[st.top()] <= v[i]){
//             st.pop();
//         }
//         int span = st.empty() ? i + 1 : i - st.top();
//         ans.push_back(span);

//         st.push(i);
//     }
//     return ans;