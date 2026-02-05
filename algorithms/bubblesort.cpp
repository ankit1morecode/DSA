#include<bits/stdc++.h>
using namespace std;
    void bubbleSort(vector<int>& nums,int n){
        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-i-1; j++){ 
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
        for(int i=0; i<n; i++){
        cout << nums[i] << " ";
        }
}
int main(){
        int n = 10;
        vector<int> v = {5,4,1,3,2,7,11,-5,32,-32};
        bubbleSort(v,n);
    return 0;
}