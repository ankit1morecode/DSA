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

Node* buildTree(vector<int> nodes,int &idx){
    idx++;
    if(nodes[idx]==-1)return NULL;
    
    Node* currNode = new Node(nodes[idx]);

    currNode->left = buildTree(nodes,idx);   //left subtree call.....
    currNode->right = buildTree(nodes,idx);     //right subtree call.....

    return currNode;
}

void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        int n = q.size();
        Node* curr = q.front();
        q.pop();
        if(curr == NULL){
            cout << endl;
            if(q.empty())break;
            q.push(NULL);
        }else{
            cout << curr->val << " ";
            if(curr->left != NULL)q.push(curr->left);
            if(curr->right != NULL)q.push(curr->right);
        }
    }
}

int main(){
    int idx = -1;
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes,idx);
    levelOrder(root);
    return 0;
}