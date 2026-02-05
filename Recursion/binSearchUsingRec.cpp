#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> v,int st,int end,int target){
    if(st>end)return -1;
    int mid = st + (end-st)/2;
    if(v[mid]==target){
        return mid;
    }else if(v[mid]<target){
        st = mid + 1;
        return binarySearch(v,st,end,target);
    }else{
        end = mid-1;
        return binarySearch(v,st,end,target);
    }
}
int main(){
    vector<int> v = {1,2,3,4,5,6,7};
    int st = 0;
    int end = v.size()-1;
    int target = 6;
    cout << binarySearch(v,st,end,target);
 return 0;
}