#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        left = right = NULL;
    }
};

Node* buildTree(vector<int> nodes,int &idx){
    idx++;
    if(nodes[idx]==-1)return NULL;

    Node* currNode = new Node(nodes[idx]);

    currNode->left = buildTree(nodes,idx);   //left subtree call.....
    currNode->right = buildTree(nodes,idx);     //right subtree call.....

    return currNode;
}

int count(Node* root){
    if(root==NULL)return 0;

    int left = count(root->left);
    int right = count(root->right);

    return 1+left+right;
}
 
int main() {
    int idx = -1;
    int idx2 = -1;
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    vector<int> nodes2 = {1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,3,-1,-1};
    Node* root = buildTree(nodes,idx);
    Node* root2 = buildTree(nodes2,idx2);

    cout << count(root) << endl;
    cout << count(root2) << endl;
    return 0;
}