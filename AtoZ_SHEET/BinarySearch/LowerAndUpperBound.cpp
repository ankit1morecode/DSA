#include <bits/stdc++.h>
using namespace std;

int lowerBound(int nums[],int n,int x){
    int st = 0;
    int end = n-1;
    int idx = n;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(nums[mid]>=x){
            idx = min(idx,mid);
            end = mid -1;
        }else{
            st = mid+1;
        }
    }
    return idx;
}

int upperBound(int nums[],int n,int x){
    int st = 0;
    int end = n-1;
    int idx = -1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(nums[mid]<=x){
            idx = max(idx,mid);
            st = mid+1;
        }else{
            end = mid -1;
        }
    }
    return idx;
}

int main(){
    int n = 10;
    int arr[n] = {1,2,3,3,7,8,9,9,9,11};
    int x = 3;
    cout << upperBound(arr,n,x);
    return 0;
}