#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int printNums(int n){
    if(n==0){
        return 0;
    }
    return n + printNums(n-1);
}

int fib(int n){
    if(n==0 || n==1)return n;
    return fib(n-1)+fib(n-2);
}

void isSorted(vector<int>& v,int n){
    if(n==1){
        cout << "sorted" << endl;
        return ;
    }
    if(v[n-1]<v[n-2]){
        cout << "Not Sorted" << endl;
        return;
    }
    isSorted(v,n-1);
}
int firstOcc(vector<int>& v,int n,int target,int i){
    if(i==n)return -1;

    if(v[i]==target)return i;
    i++;
    return firstOcc(v,n,target,i);
}
int lastOcc(vector<int>& v,int n,int target){
    if(n==-1)return -1;

    if(v[n-1]==target)return n-1;
    return lastOcc(v,n-1,target);
}
int lastOcc(vector<int>& v,int n,int target,int i){    // second way of finding last occurence of no. in arr...
    if(i==n)return -1;
    int tarIdx = lastOcc(v,n,target,i+1);
    if(tarIdx==-1 && v[i]==target)return i;
    return tarIdx;
}

int power(int x,int n){
    if(n==0)return 1;
    if(n%2==0)return power(x*x,n/2);
    else return x*power(x,n-1);
}
int main(){
    cout << power(2,3) << endl;
 return 0;
}