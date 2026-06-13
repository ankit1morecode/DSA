#include <bits/stdc++.h>
using namespace std;

int countSubarraysWithGivenXorK(int arr[],int n,int k){
    int xr = 0;
    unordered_map<int,int> m;
    m[0] = 1;
    int cnt = 0;
    for(int i=0; i<n; i++){
        xr^=arr[i];
        int fd = xr^k;
        if(m.find(fd)!=m.end()){
            cnt+=m[fd];
        }else{
            m[xr]++;
        }
    }
    return cnt;
}

int main(){
    int n = 5;
    int k = 6;
    int arr[n] =  {4, 2, 2, 6, 4};
    cout <<  countSubarraysWithGivenXorK(arr,n,k);
    return 0;
}