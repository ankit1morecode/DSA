#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreater(vector<int> &v){
    vector<int> ans;
    stack<int> st;
    int n = v.size();
    for(int i=n-1; i>=0; i--){
        while(!st.empty() && st.top() <= v[i])st.pop();
        int span = !st.empty()?(st.top()):-1;
        ans.push_back(span);
        st.push(v[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
 
int main() {
    vector<int> v = {6,8,0,1,3};
    vector<int> ans = nextGreater(v);
    for(int val : ans)cout << val << " ";
    return 0;
}