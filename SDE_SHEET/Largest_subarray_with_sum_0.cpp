#include <bits/stdc++.h>
using namespace std;

int largestSubarrayWithSum0(int arr[],int n){
    int maxlen = 0;
    unordered_map<int,int> m;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum==0)maxlen=i+1;
        if(m.find(sum)!=m.end()){
            maxlen = max(maxlen,i-m[sum]);
        }else{
            m[sum]=i;
        }
    }
    return maxlen;
}

int main(){
    int n = 8;
    int arr[n] = {15,-2,2,-8,7,1,7,10,23};
    cout << largestSubarrayWithSum0(arr,n);
    return 0;
}