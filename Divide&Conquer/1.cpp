#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& v,int si,int ei){
    int mid = si+(ei-si)/2;
    int i = si;
    int j = mid+1;
    vector<int> temp(ei-si+1);
    int k=0;
    while(i<=mid && j<=ei){
        if(v[i]>=v[j])temp[k++]=v[j++];
        else temp[k++]=v[i++];
    }
    while(i<=mid)temp[k++]=v[i++];
    while(j<=ei)temp[k++]=v[j++];
    for(int i = 0; i<temp.size(); i++){
        v[si+i]=temp[i];
    }
}

void mergeSort(vector<int> &v,int si,int ei){
    if(si>=ei)return;
    int mid = si + (ei-si)/2;
    mergeSort(v,si,mid);   //left half sort
    mergeSort(v,mid+1,ei);   //right half sort
    merge(v,si,ei);         //merge the arrays
}

int main(){
    vector<int> v = {7,5,6,3,4,2};
    mergeSort(v,0,v.size()-1);
    for(int i=0; i<v.size(); i++)cout << v[i] << " ";
 return 0;
}