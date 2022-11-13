#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

// Recursive method
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    if(root == NULL) return false;
    if(root->data == x) return true;
    if(root->data > x) return searchInBST(root->left,x);
    else return searchInBST(root->right,x);
}
// Iteartive method
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    BinaryTreeNode<int> *temp = root;
    while(temp!=NULL){
        if(temp->data == x) return true;
        if(temp->data > x) temp = temp->left;
        else temp = temp->right;
    }
    return false;
}
int main(){
    
    return 0;
}