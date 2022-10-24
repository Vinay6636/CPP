#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;
//Time Complxity   O(n2)
Node *removeDuplicates(Node *head)
{
    if(head == NULL) return NULL;
    Node* curr = head;
    while(curr!= NULL){
        Node* temp = curr->next;
        Node* prev = curr;
        while(temp!=NULL){
            if(curr->data == temp->data){
                Node* forw = temp->next;
                delete(temp);
                prev->next = forw;
                temp = forw;
            }
            else{
                prev = temp;
                temp = temp->next;
            }
        }
        curr = curr -> next;
    }
    return head;
}


// time Complextiy - O(n)

Node *removeDuplicates(Node *head)
{
    if(head == NULL) return NULL;
    Node* curr = head;
    Node* prev = NULL;
    unordered_map<int,bool>  visited;
    while(curr!= NULL){
        if(visited[curr->data]!=true){
            visited[curr->data]= true;
            prev = curr;
            curr = curr->next;
        }
        else{
            Node* forw = curr->next;
            prev->next = forw;
            delete(curr);
            curr = forw;
        }
    }
    return head;
}



int main(){
    
    return 0;
}