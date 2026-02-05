#include <bits/stdc++.h>
using namespace std;
void change(vector<int> &arr, int n, int i){
    if (i == n){
        for (int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }cout << endl;
        return;
    }
    arr[i] = i + 1;
    change(arr, n, i + 1);
    arr[i] -= 2;
}
int main(){
    int n = 5;
    vector<int> arr(n, 0);
    change(arr, n, 0);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}