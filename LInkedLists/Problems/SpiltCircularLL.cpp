#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

void BreakCLL(Node* head,Node* head1,Node* head2){
    if(head == NULL ) return NULL;
    Node* slow = head;
    Node* fast = head ->next;
    while(fast!= head && fast->next!=head){
        slow=slow->next;
        fast=fast-next->next;
    } 
    head1 = head;
    head2 = slow->next;
    
    slow->next = head1;
    Node* curr = head2;
    while(curr->next!=head){
        curr = curr->next;
    }
    curr->next = head2;
}


int main(){
    

    return 0;
}