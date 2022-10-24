#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;
/*
   Double Linked List :
*/

class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    public:
    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
    ~Node(){
        // int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};

void insertAtHead(Node* &head,Node* &tail,int d)
{
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
    }
}

void insertAtTail(Node* &head,Node* &tail,int d){

    if(tail == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(d);
    temp -> prev = tail;
    tail -> next = temp;
    tail = temp;
    }
}
void insertAtPosition(Node* &head,Node* &tail,int position,int d){
    if(position == 1){
        insertAtHead(head,tail,d);
        return;
    }
    int cnt = 1;
    Node* t = head;
    while(cnt < position -1){
        t = t ->next;
        cnt++;
    }
    if(t -> next == NULL){
        insertAtTail(head,tail,d);
        return;
    }
    Node* temp = new Node(d);
    temp -> next = t -> next ;
    t -> next -> prev = temp;
    t -> next = temp;
    temp -> prev = t;


}

void Deletion(Node* &head,Node* &tail,int position,int d){
    if(position == 1){
        Node* t = head;
        t -> next -> prev = NULL;
        head = t -> next;
        t -> next = NULL;
        delete t;
    }
    int cnt  = 1;
    Node* curr = head;
    Node* prev = NULL;
    while(cnt < position){
        prev = curr;
        curr = curr -> next;
        cnt++;
    }
    if(curr -> next == NULL){
        tail = prev;
    }
    curr -> prev = NULL;
    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;
}
void printDLL(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data <<" ";
        temp = temp-> next;
    }
    cout<<endl;
}

int getLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp-> next;
    }
    return len;
}

int main(){
    //Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
    printDLL(head);
    cout<<getLength(head)<<endl;
   // cout<<head->prev<<" "<<head->next<<endl;
   insertAtTail(head,tail,15);
   printDLL(head);
   insertAtHead(head,tail,20);
   printDLL(head);
   //cout<<head->data<<endl;
   insertAtHead(head,tail,30);
   printDLL(head);
   insertAtHead(head,tail,40);
   printDLL(head);
   Deletion(head,tail,2,23);
   printDLL(head);
   insertAtPosition(head,tail,4,29);
   printDLL(head);
   Deletion(head,tail,4,23);
   printDLL(head);
    return 0;
}

