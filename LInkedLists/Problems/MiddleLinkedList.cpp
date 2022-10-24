#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;


int getLength(Node* head){
    int count =0;
    while(head!= NULL){
        head = head->next;
        count++;
    }
    return count;
}

Node *findMiddle(Node *head) {
    int len = getLength(head);
    int ans = (len/2);
    int cnt = 0;
    Node* temp = head;
    while(cnt<ans){
        temp = temp -> next;
        cnt++;
    }
    return temp;
}

Node *findMiddle(Node *head) {
    if(head == NULL || head->next == NULL) return head;
    if(head -> next-> next == NULL) return head->next;
    Node* fast = head->next;
    Node* slow = head;
    while(fast!=NULL && slow!= NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast= fast->next;
        }
        slow = slow ->next;
    }
    return slow;
}


int main(){
    
    return 0;
}