#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* prev;
    Node* next;
    Node(int val){
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};
class DoublyList{
public:
    Node* head;
    Node* tail;
    DoublyList(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    void pop_front(){
        Node* temp = head;
        head = head->next;
        if(head)head->prev=NULL;
        temp->next = NULL;
        delete temp;
    }
    void print(){
        Node* temp = head;
        while(temp){
            cout << temp->val << "<==>";
            temp=temp->next;
        }cout << "NULL" << endl;
    }
};
int main(){
    DoublyList dbll;
    dbll.push_front(5);
    dbll.push_front(4);
    dbll.push_front(3);
    dbll.push_front(2);
    dbll.push_front(1);
    dbll.pop_front();
    dbll.pop_front();
    dbll.print();
 return 0;
}