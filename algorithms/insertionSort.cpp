#include<bits/stdc++.h>
using namespace std;
    void insertionSort(vector<int>& nums,int n){
        for(int i=1; i<n; i++){
            int curr = nums[i];
            int j = i-1;
            while(j>=0 && curr < nums[j]){
                nums[j+1]=nums[j];
                j--;
            }
            nums[j+1]=curr;
        }
    }
int main(){
    int n = 5;
    vector<int> v = {5,4,1,3,2};
    insertionSort(v,n);
    for(int val: v)cout << val <<" ";
 return 0;
}