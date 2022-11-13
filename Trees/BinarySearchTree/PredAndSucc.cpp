#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;


pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    pair<int,int> ans;
    BinaryTreeNode<int> *temp = root;
    int pred = -1;
    int succ = -1;
    while(temp->data!=key){
        if(temp->data>key){
            succ = temp ->data;
            temp = temp->left;
        }
        else{
            pred = temp->data;
            temp= temp->right;
        }
    }
    BinaryTreeNode<int>* leftTree = temp->left;
    while(leftTree!=NULL){
        pred = leftTree->data;
        leftTree = leftTree -> right;
    }
    BinaryTreeNode<int>* rightTree = temp->right;
    while(rightTree!=NULL){
        succ = rightTree->data;
        rightTree = rightTree ->left;
    }
    ans = make_pair(pred,succ);
    return ans;
}


int main(){
    
    return 0;
}