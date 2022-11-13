#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

Node* lca(Node* root ,int n1 ,int n2 )
    {
       if(root == NULL) return NULL;
       if(root->data == n1 || root->data == n2) return root;
       Node* leftAns = lca(root->left,n1,n2);
       Node* rightAns = lca(root->right,n1,n2);
       if(leftAns!= NULL && rightAns!=NULL) return root;
       else if(leftAns!=NULL  && rightAns==NULL) return leftAns;
       else if(rightAns!=NULL && leftAns == NULL) return rightAns;
       else return NULL;
    }

int main(){
    
    return 0;
}