#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 3;
    vector<int> v(n);
    for(int i=0; i<n; i++)v[i]=i+1;
    int subset = 1<<n;
    vector<vector<int>> ans;
    for(int i=0; i<subset; i++){
        vector<int> temp;
        int j = 0;
        int t = i;
        while(t>0 && j<n){
            if(t&1)temp.push_back(v[j]);
            t = t>>1;
            j++;
        }
        ans.push_back(temp);
    }
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }cout << endl;
    }
    return 0;
}
