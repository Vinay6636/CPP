#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

class Solution
{
    private:
    void insertatTail(Node* &head,Node* &tail,int d){
        Node* newNode = new Node(d);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
    }
    public:
    Node *copyList(Node *head)
    {
        // step 1: create a clone linked list
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        Node* temp = head;
        while(temp!=NULL){
            insertatTail(cloneHead,cloneTail,temp->data);
            temp = temp -> next;
        }
        // Create a map
       unordered_map<Node*,Node*> oldTonewNode;
       Node* originalNode = head;
       Node* cloneNode = cloneHead;
       
       while(originalNode!=NULL && cloneNode!=NULL){
           oldTonewNode[originalNode] = cloneNode;
           originalNode = originalNode -> next;
           cloneNode = cloneNode -> next;
       }
       originalNode = head;
       cloneNode = cloneHead;
       while(originalNode!=NULL){
           cloneNode -> arb  = oldTonewNode[originalNode -> arb];
           originalNode = originalNode -> next;
           cloneNode = cloneNode -> next;
       }
       return cloneHead;
    }

};

int main(){
    
    return 0;
}