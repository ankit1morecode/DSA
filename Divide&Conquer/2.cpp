#include <bits/stdc++.h>
using namespace std;
    int partition(vector<int>& v,int si,int ei){
        int i = si-1;
        int piv = v[ei];
        for(int j=si; j<ei; j++){
            if(v[j]<=piv){
                i++;
                swap(v[i],v[j]);
            }
        }
        i++;
        swap(v[i],v[ei]);
        return i;
    }
    void quickSort(vector<int>& v,int si,int ei){
        if(si>=ei)return;
        int pivIdx = partition(v,si,ei);
        quickSort(v,si,pivIdx-1);
        quickSort(v,pivIdx+1,ei);
    }
int main(){
    vector<int> v = {4,7,2,6,5,3};
    quickSort(v,0,v.size()-1);
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
 return 0;
}