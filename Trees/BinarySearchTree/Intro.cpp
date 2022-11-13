#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

/* 
  Binary Search Tree is a type of data where its left nodes are smaller than root node and
  right nodes are greater than larger.
*/
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
void inorder(Node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

Node* insertIntoBST(Node* &root,int d){
    if(root == NULL){
        root = new Node(d);
        return root;
    }
    if(d>root->data) root->right = insertIntoBST(root->right,d);
    else root->left = insertIntoBST(root,d);
    return root;
}

Node* minVal(Node* root){
    Node* temp = root;
    while(temp->left!=NULL){
        temp = temp->left;
    }
    return temp;
}
Node* maxVal(Node* root){
    Node* temp = root;
    while(temp->right!=NULL){
        temp = temp->right;
    }
    return temp;
}


void takeInput(Node* &root){
    int data;
    cin>>data;
    while (data!=-1)
    {
        root = insertIntoBST(root,data);
        cin>>data;
    }   
}


Node* DeleteFromBST(Node* root,int val){
    if(root == NULL) return root;
    if(root->data == val){
        // 0 child
        if(root->left == NULL && root -> right == NULL){
            delete root;
            return NULL;
        }
        // 1 child
        if(root->left!= NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        if(root->left== NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        // 2 child
        if(root->left!=NULL && root->right!=NULL){
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = DeleteFromBST(root->right,mini);
            return root;
        }
    }
}
int main(){
    Node* root = NULL;
    cout<<"Enter data to create BST"<<endl;
    takeInput(root);
    //levelOrderTraversal(root);
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    return 0;
}