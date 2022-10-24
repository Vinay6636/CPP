#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;



Node * uniqueSortedList(Node * head) {
    // Write your code here.
    if(head == NULL) return NULL;
    Node* curr = head;
    while(curr){
        if(curr->next!= NULL && curr->data == curr->next->data){
            Node* next_next = curr->next->next;
            Node* temp = curr->next;
            delete(temp);
            curr->next = next_next;
        }
        else{
            curr=curr->next;
        }
    }
    return head;
}

int main(){
    
    return 0;
}