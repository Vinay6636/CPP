#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;


bool detectLoop(Node* head) {

    if(head == NULL)
        return false;

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp !=NULL) {

        //cycle is present
        if(visited[temp] == true) {
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;

    }
    return false;

}
// Floyd's cycle detection Algorithm: Use two Nodes 
Node* floydDetectCycle(Node* head){
    if(head == NULL) return NULL;
    Node* slow = head;
    Node* fast = head;
    while(fast!= NULL && slow!= NULL){
        fast = fast -> next;
        if(fast!=NULL) fast = fast -> next;
        slow = slow -> next;
        if(slow == fast) return slow;
    }
    return NULL;
}

Node* getStartingNode(Node* head){
    if(head == NULL ) return NULL;
    Node* intersection = floydDetectCycle(head);
    Node* slow = head;
    while(slow!=intersection){
        slow = slow -> next;
        intersection = intersection - > next;
    }
    return slow;
}

void removeLoop(Node* head){
    if(head == NULL) return;
    Node* startingLoopNode = getStartingNode(Node* head);
    Node* temp = startingLoopNode;
    while(temp -> next ! = startingLoopNode){
        temp = temp -> next;
    }
    temp = temp ->NULL;
}





int main(){
    
    return 0;
}