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
Node* reverseLL(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
void zigZag(Node* head){
    Node* rightt = splitList(head);
    Node* newHead = reverseLL(rightt);
    Node* left = head;
    Node* right = newHead;
    Node* tail = NULL;
    while(left){
        Node* nxtLeft = left->next;
        Node* nxtRight = right->next;
        left->next = right;
        right->next = nxtLeft; 
        tail = right;
        left = nxtLeft;
        right = nxtRight;
    }
    if(right)tail->next = right;
     
}
int main(){
    List ll;
    ll.push_back(5);
    ll.push_back(2);
    ll.push_back(4);
    ll.push_back(3);
    ll.push_back(16);
    ll.push_back(34);
    ll.push_back(32);
    ll.push_back(15);
    ll.push_back(11);
    PrintLL(ll.head);
    zigZag(ll.head);
    PrintLL(ll.head);
 return 0;
}