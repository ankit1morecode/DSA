#include<bits/stdc++.h>
using namespace std;
    void selectionSort(vector<int>& nums,int n){
        for(int i=0; i<n; i++){
            int mn = INT_MAX;
            int idx = 0;
            for(int j=i; j<n; j++){
                if(nums[j]<mn){
                    mn=nums[j];
                    idx = j;
                }
            }
            swap(nums[i],nums[idx]);
        }
        for(int i=0; i<n; i++){
        cout << nums[i] << " ";
        }
    }

int main(){
    int n = 10;
    vector<int> v = {5,4,1,3,2,7,11,-5,32,-32};
    selectionSort(v,n);
 return 0;
}