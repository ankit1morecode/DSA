#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        left = right = NULL;
    }
};

static int idx = -1;

Node* buildTree(vector<int> nodes){
    idx++;
    if(nodes[idx]==-1)return NULL;

    Node* currNode = new Node(nodes[idx]);

    currNode->left = buildTree(nodes);   //left subtree call.....
    currNode->right = buildTree(nodes);     //right subtree call.....

    return currNode;
}

void preorderTraversal(Node* root) {
    if(root == NULL)return;

    cout << root->val << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

 
int main() {
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    // cout << root->val;
    preorderTraversal(root);
    return 0;
}