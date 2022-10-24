#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;


bool checkPalindrome(vector<int> v){
      int s = 0;
      int e = v.size()-1;
      while(s<=e){
          if(v[s]!=v[e]) return 0;
          s++;
          e--;
      }
      return 1;
  }
  
  bool isPalindrome(Node *head)
    {
        //Your code here
        vector<int> v;
        Node* temp = head;
        while(temp){
            v.push_back(temp->data);
            temp = temp -> next;
        }
        return checkPalindrome(v);
    }

// 2nd method

    Node* getMid(Node* head ) {
        Node* slow = head;
        Node* fast = head -> next;
        
        while(fast != NULL && fast-> next != NULL) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        
        return slow;
    }
    Node* reverse(Node* head) {
        
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while(curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
  
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head -> next == NULL) {
            return true;
        }
        
        //step 1 -> find Middle
        Node* middle = getMid(head);
        //cout << "Middle " << middle->data << endl;
        
        //step2 -> reverse List after Middle
        Node* temp = middle -> next;
        middle -> next = reverse(temp);
        
        //step3 - Compare both halves
        Node* head1 = head;
        Node* head2 = middle -> next;
        
        while(head2 != NULL) {
            if(head2->data != head1->data) {
                return 0;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
    
        //step4 - repeat step 2
        temp = middle -> next;
        middle -> next = reverse(temp);
        
        return true;
    }
int main(){
    
    return 0;
}