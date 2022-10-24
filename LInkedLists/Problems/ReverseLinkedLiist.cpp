#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this -> data = data;
    }
};

// Iteartive method
Node* reverseLinkedList(Node *head)
{
    Node* prev = NULL;
    Node* curr = head;
    Node* forw = NULL;
    while(curr){
        forw = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forw;
    }
    return prev;
}

// recursion method -1
void reverse(Node* &head,Node* curr,Node* prev){
    if(curr == NULL){
        head = prev;
        return;
    }
    Node* forw = curr -> next;
    reverse(head,forw,curr);
    curr -> next = prev;
}

Node* reverse1(Node* head){
    if(head == NULL || head -> next == NULL) return head;
    Node* SmallHead = reverse1(head-> next);
    head -> next -> next = head;
    head -> next = NULL;
    return SmallHead;
}
int main(){
    reverse1(head);
    return 0;
}