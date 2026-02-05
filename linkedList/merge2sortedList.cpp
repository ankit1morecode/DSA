#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = NULL;
    }
};
class List{
public:
    Node* head;
    Node* tail;
    List(){
        head=tail=NULL;
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        Node* temp = head;
        while(temp!=tail){
            temp = temp->next;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
    void pop_front(){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back(){
    if(head == NULL)return;
    if(head == tail){
        delete head;
        head = tail = NULL;
        return;
    }
    Node* temp = head;
    while(temp->next != tail){
        temp = temp->next;
    }
    delete tail;
    tail = temp;
    tail->next = NULL;
}
};
void PrintLL(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            cout << temp->val << "--->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
Node* splitList(Node* head){
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;
    while(fast && fast->next){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if(prev)prev->next = NULL;
    return slow;
}
Node* merge(Node* head,Node* rightHead){
    List ans;
    Node* i=head;
    Node* j=rightHead;
    while(i && j){
        if(i->val <= j->val){
            ans.push_back(i->val);
            i=i->next;
        }else{
            ans.push_back(j->val);
            j=j->next;
        }
    }
    while(i){
        ans.push_back(i->val);
        i=i->next;
    }
    while(j){
        ans.push_back(j->val);
        j=j->next;
    }
    return ans.head;
}
Node* mergeSortList(Node* head){
    if(head==NULL|| head->next == NULL)return head;
    Node* rightHead = splitList(head);
    Node* left = mergeSortList(head);
    Node* right = mergeSortList(rightHead);
    return merge(left,right);
}
int main(){
    List ll;
    ll.push_back(5);
    ll.push_back(2);
    ll.push_back(4);
    ll.push_back(3);
    ll.push_back(1);
    Node* newHead = mergeSortList(ll.head);
    PrintLL(newHead);
 return 0;
}