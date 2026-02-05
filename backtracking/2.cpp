#include <bits/stdc++.h>
using namespace std;
void subset(vector<vector<char>>& ans,vector<char> nums,vector<char> temp,int n,int i){
        if(i==n){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        subset(ans,nums,temp,n,i+1); //not include
        temp.pop_back();
        subset(ans,nums,temp,n,i+1); //include
    }
int main(){
    vector<char> nums = {'a','b','c'};
    vector<vector<char>> ans;
    vector<char> temp;
    int n = nums.size();
    subset(ans,nums,temp,n,0);
    n = ans.size();
    for(int i = 0; i<n; i++){
        int k = ans[i].size();
        for(int j=0; j<k; j++){
            cout << ans[i][j];
        }cout << " ";
    }
 return 0;
}