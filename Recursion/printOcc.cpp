#include <bits/stdc++.h>
using namespace std;
     void occur(vector<int> v,int key,int i){
        if(i==v.size())return;
        if(v[i]==key){
            cout << i << " ";
            occur(v,key,i+1);
        }else{
             occur(v,key,i+1);
        }
     }
int main(){
    vector<int> v = {3,2,4,5,6,2,7,2,2};
    int key = 2;
    occur(v,key,0);
 return 0;
}