#include <bits/stdc++.h>
using namespace std;
//brute
int maxSubArrSum(vector<int> &nums, int n){
    int sum = INT_MIN;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            int ans = 0;
            for (int k = i; k <= j; k++){
                ans += nums[k];
            }
            sum = max(sum, ans);
        }
    }
    return sum;
}
//better
int maxSubArrSum2(vector<int> &nums, int n){
    int sum = INT_MIN;
    for (int i = 0; i < n; i++){
        int sum2 = 0;
        for (int j = i; j < n; j++){
            sum2 += nums[j];
            sum = max(sum, sum2);
        }
    }
    return sum;
}
/* 

Description of kadanes algorithm(algo of DP)

kadanes algorithm states that , when we add (+ve) + (+ve)  = (+ve)
                                             small(-ve) + (+ve) = (+ve)
                                             big(-ve) + (+ve) = (-ve)

            if(-ve) means in subarray all the before elements only contributes some decrement in ans
            thats why , we have to make it 0 , every time when some is 0;


*/
//optimized

int maxSubArrSum3(vector<int> &nums, int n){                   // kadanes algorithm
    int sum =0;
    int maxSum = INT_MIN;
    for(int i = 0; i < n; i++){
        sum+=nums[i];
        maxSum = max(maxSum,sum);
        if(sum<0)sum=0;
    }
    return maxSum;
}

int main(){
    vector<int> arr = {-2, -5, -6, -5, -4, -2};
    int n = 6;
    int val = maxSubArrSum3(arr, n);
    cout << val;
    return 0;
}