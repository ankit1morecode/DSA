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
    ~Node(){
        cout << "~Node" << endl;
        if(next!=NULL){
            delete next;
            next = NULL;
        }
    }
};
class List{
    Node* head;
    Node* tail;
public:
    List(){
        head=tail=NULL;
    }
    ~List(){
        cout << "~List" << endl;
        if(head!=NULL){
            delete head;
        }
        head=NULL;
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
    void insert(int val,int pos){
        if(head==NULL){
            push_back(val);
            return;
        }
        if(pos==0){
            push_front(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* temp = head;
        pos--;
        while(pos--){
            temp = temp->next;
        }
        Node* tnext = temp->next;
        temp->next = newNode;
        if(tnext)newNode->next = tnext;
    }
    int searchKey(int key){
        Node* temp = head;
        int i=0;
        while(temp!=NULL){
            if(key==temp->val)return i;
            temp = temp->next;
            i++;
        }
    }
    int helper(int key,Node* temp){
        if(temp==NULL){
            return -1;
        }
        if(temp->val==key){
            return 0;
        }
        int idx = helper(key,temp->next);
        if(idx=-1)return -1;
        return idx+1;
    }
    int searchRec(int key){
        return helper(key,head);
    }

    void reverseList(){
        Node* prev = NULL;
        Node* curr = head;
        Node* nextNode = head->next;

        while(nextNode!=tail){
        curr = prev;
        prev = prev->next;
        if(curr->next->next)curr = curr->next->next;
        curr->next = nextNode;
        }
    }
    void PrintLL(){
        Node* temp = head;
        while(temp!=NULL){
            cout << temp->val << "--->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.reverseList();
    ll.PrintLL();
 return 0;
}