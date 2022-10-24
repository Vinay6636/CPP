#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

// Linked List --> It is a type of linear data structure 
    /*
      --> It basically means collection of nodes.
      --> Node is a collection of data and pointer.
      --> Linked list is used to overcome drawbacks of arrays.
      Advantages:
       --> We can easily grow or shrink the size of the linked  list in runtime .[No memory wasteage]
      Disadvantages:
       

       Types of Linked lists:
         1.Single Linked List
         2.Double Linked List
         3.Circular Linked List
         4.Circular Double Linked List

    */

class Node{
    public:
    int data;
    Node* next;
    // Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    // Destructor
    ~Node(){
       // int value = this -> data;
        if(this->next != NULL){
            delete next;
            this -> next = NULL;
        }
    }
};


void InsertAtHead(Node* &head,int data){
    // new node create
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;

}

void InsertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = tail -> next; // tail = temp;
}

void InsertAtPosition(Node* &head,Node* &tail,int position,int d){
    if(position == 1){
        InsertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    if(temp -> next == NULL){
        InsertAtTail(tail,d);
        return;
    }
    Node* n = new Node(d);
    n -> next = temp -> next;
    temp -> next = n;


}

void print(Node* &head){
    Node* tem = head;
    while(tem != NULL){
        cout<< tem -> data <<" ";
        tem = tem -> next;
    }
    cout<<endl;
}

void deleteNode(Node* &head,Node* &tail,int position){
    // Deleting first Node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        // deleting last node or middle node
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        if(curr -> next = NULL){
            tail = prev;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}
int main(){
    Node* node1  = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    Node* head = node1;
    Node* tail = node1;
    print(head);
    //InsertAtHead(head,12);
    InsertAtTail(tail,12);
    print(head);
    //InsertAtHead(head,15);
    InsertAtTail(tail,15);
    print(head);
    InsertAtPosition(head,tail,4,13);
    print(head);

    deleteNode(head,tail,1);
    print(head);
    deleteNode(head,tail,3);
    print(head);
    deleteNode(head,tail,2);
    print(head);
    return 0;
}