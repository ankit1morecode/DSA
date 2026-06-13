#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> nums,int n,int x){
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

int upperBound(vector<int> nums,int n,int x){
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

    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int n = nums.size();
        int lb = lower_bound(nums.begin(),nums.end(),x)-nums.begin();
        int ub = upper_bound(nums.begin(),nums.end(),x)-nums.begin();
        int floor = (ub == 0) ? -1 : nums[ub - 1];
        int ceil  = (lb == n) ? -1 : nums[lb];
        return {nums[ub-1],nums[lb]};
    }
    
int main(){
    int n = 10;
    vector<int> arr = {1,2,3,3,7,8,9,9,9,11};
    int x = 3;
    cout << upperBound(arr,n,x) << endl;
    vector<int> v = getFloorAndCeil(arr,x);
    cout << v[0] << " " << v[1] << endl;
    return 0;
}