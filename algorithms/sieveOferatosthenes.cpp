#include <bits/stdc++.h>
using namespace std;
    //sieve of eratosthenes !!
    int countPrimes(int n){
        vector<bool> isPrime(n + 1, true);
        int ans = 0;
        for (int i = 2; i < n; i++){
            if (isPrime[i] == true){
                ans++;
                for(int j = 2 * i; j < n; j += i){                     //eliminating non-prime
                    isPrime[j] = false;
                }
            }
        }
        return ans;
    }
    //euclids theorem  !!
    int gcdok(int a, int b){
        while(a!=0 && b!=0){
            if(a>=b){
                a=a%b;
            }else{
                b=b%a;
            }
        }
        if(a==0)return b;
        else return a;
    }
    //euclids theorem (recursion) !!
    int gcdrec(int a,int b){
        if(b==0)return a;
        return gcdrec(b,a%b);
    }
int main(){
    cout << gcdrec(20,28); 
 return 0;
}