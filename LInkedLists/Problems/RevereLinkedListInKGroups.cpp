#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;


Node* kReverse(Node* head, int k) {
    // Write your code here.
    if(head == NULL) return NULL;
    if(len(head)<k) return head;
    Node* curr = head;
    Node* prev = NULL;
    Node* forw = NULL;
    int cnt = 0;
    while(curr!=NULL && cnt < k){
        forw = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forw;
        cnt++;
    }
    if(forw!=NULL){
        head->next = kReverse(forw,k);
    }
    return prev;
 
}

int main(){
    
    return 0;
}