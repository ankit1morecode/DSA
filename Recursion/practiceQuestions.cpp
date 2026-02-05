#include <bits/stdc++.h>
using namespace std;

int tilingProblem(int n){
    if(n==0|| n==1)return 1;
    int ans1 = tilingProblem(n-1);    //vertical placing
    int ans2 = tilingProblem(n-2);     //horizontal placing
    return ans1 + ans2;
}

string removeDuplicates(string str,vector<bool>& letters,string &ans,int n){
    if(n<0)return ans;
    if(letters[str[n]-'a']==false){
        ans.push_back(str[n-1]);
        letters[str[n]-'a']=true;
    }
    return removeDuplicates(str,letters,ans,n-1);
}

int pairFriends(int n){
    if(n==1 || n==2)return n;
    return pairFriends(n-1) + (n-1)*pairFriends(n-2);
}

void binaryStrings(int n,int lastVal,string finalAns){
    if(n==0){
        cout <<  finalAns << endl;
        return;
    }
    if(lastVal!=1){
        binaryStrings(n-1,0,finalAns+'0');
        binaryStrings(n-1,1,finalAns+'1');
    }else{
        binaryStrings(n-1,0,finalAns+'0');
    }
}

int main(){
    // tiling problem
    int n = 4;
    cout << tilingProblem(n) << endl;

    //duplicates in string
    string str = "appnnacollege";
    vector<bool> letters(26,false);
    string ans="";
    ans = removeDuplicates(str,letters,ans,str.size()-1);
    reverse(ans.begin(),ans.end());
    cout << ans << endl;

    //friends pairing problem

    cout << pairFriends(4) << endl;

   cout << "all the Binary Strings whitout consicutive ones" << endl;

    string finalAns = "";
    binaryStrings(3,0,finalAns);
 return 0;
}