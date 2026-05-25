#include <bits/stdc++.h>
using namespace std;

void quickSort(vector<int>& v,int si,int ei){
    if(si>=ei)return;
    int piv = v[ei];
    int i = si-1;
    for(int j=si; j<ei; j++){
        if(v[j]<=piv){
            i++;
            swap(v[i],v[j]);
        }
    }
    i++;
    swap(v[i],v[ei]);
    quickSort(v,si,i-1);
    quickSort(v,i+1,ei);
}

int main() {
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++)cin >> v[i];
        quickSort(v,0,n-1);
        for(int i=0; i<n; i++)cout << v[i] << " ";
    return 0;
}