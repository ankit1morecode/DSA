#include <bits/stdc++.h>
using namespace std;

long long dprec(long long n,vector<long long> &dp){
    if(n==0 || n==1)return n;

    if(dp[n]!=-1)return dp[n];

    dp[n] = dprec(n-1,dp) + dprec(n-2,dp);
    return dp[n];  
}

int main() {
    long long n = 92;
    vector<long long> dp(n+1,-1);
    cout << dprec(n,dp) << endl;
    return 0;
}