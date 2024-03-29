#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;


Node* solve(Node* root, int &k, int node){

    //base case

    if(root == NULL){

        return NULL;

    }

    if(root -> data == node){

        return root;

    }

    

    Node* leftAns = solve(root -> left, k, node);

    Node* rightAns = solve(root -> right, k, node);

    

    //go back

    if(leftAns != NULL && rightAns == NULL){

        k--;

        if(k <= 0){

            k = INT_MAX;

            return root;

        }

        return leftAns;

    }

    

    if(leftAns == NULL && rightAns != NULL){

        k--;

        if(k <= 0){

            k = INT_MAX;

            return root;

        }

        return rightAns;

    }

    return NULL;

}

 

int kthAncestor(Node *root, int k, int node)

{

    Node* ans = solve(root, k, node);

    if(ans == NULL || ans -> data == node){

        return -1;

    }

    else{

        return ans -> data;

    }

}

int main(){
    
    return 0;
}