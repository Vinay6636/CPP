#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;


Node* sortList(Node *head)
{
    // Write your code here.
    int c0 = 0;
    int c1 = 0;
    int c2  = 0;
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data == 0) c0++;
        else if(temp->data == 1) c1++;
        else if(temp->data == 2) c2++;
        temp = temp->next;
    }
    temp= head;
    while(temp!=NULL){
        if(c0!=0){
            temp->data = 0;
            c0--;
        }
        else if(c1!=0){
            temp->data = 1;
            c1--;
        }
        else if(c2!=0){
            temp->data=2;
            c2--;
        }
        temp = temp->next;
    }
    return head;

}

void insertAtTail(Node* &tail,Node* curr){
    tail->next = curr;
    tail = curr;
}

Node* sortList(Node *head)
{
    Node* zeroHead = new Node(-1);
    Node* zeroTail =  zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;
    
    Node* curr = head;
    while(curr!=NULL){
        int value = curr->data;
        if(value == 0){
            insertAtTail(zeroTail,curr);
        }
        else if(value == 1){
            insertAtTail(oneTail,curr);
        }
        else if(value == 2){
            insertAtTail(twoTail,curr);
        }
        curr = curr->next;
    }
    
    // merge lists
    if(oneHead -> next!= NULL){
        zeroTail->next = oneHead -> next;
    }
    else{
        zeroTail->next = twoHead -> next;
    }
    
    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;
    
    head = zeroHead -> next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    return head;
}

int main(){
    
    return 0;
}