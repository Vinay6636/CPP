#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;
/*   
--->Tree is a non-linear data structure.
    1.Node = An tree element is called as node.It represents the data in the tree.
    2.Root = The main node of the given tree is called as Root.
    3.Parent = The node which has a child node.
    4.Child = The node formed from a parent node is child node.
    5.Siblings = Two or more chid nodes of a parent node are known as siblings.
    6.Ancestor = From a node going to upward node from the current node is ancestor.
    7.Descendent = From a node going to downward node from the current node is descendcent.
    7.Leaf = A node which does not have any child nodes is leaf node.

---> Binary Tree is defined as a tree which has 0 or 1 or 2 child nodes.
---> There are three types of traversal in trees:
     1.Pre order traversal = Root L R
     2.Post order traversal = L R Root
     3.In order traversal = L Root R
*/

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right =NULL;
    }
};
// Building a tree
node* buildTree(node* root){
    cout<<"Enter the data :"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data == -1) return NULL;
    cout<<"Enter the data insertind at left side :"<<endl;
    root -> left = buildTree(root->left);
    cout<<"Enter the data insertind at right side :"<<endl;
    root -> right = buildTree(root->right);
    return root;
}

// Level order traversal
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
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

vector<int> reverseTraversal(node* root){
    queue<node*> q;
    q.push(root);
    vector<int> ans;
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        ans.push_back(temp->data);
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

void inorder(node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void buildFromlevelOrder(node* &root){
    queue<node*> q;
    cout<<"Enter data for root "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<"Enter left node for :"<<temp->data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData!=-1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }
        cout<<"Enter right node for :"<<temp->data<<endl;
        int rightData;
        cin>>rightData;
        if(rightData!=-1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }

    }
}

int main(){
    node* root = NULL;
   // root = buildTree(root);
    //cout<<"Printing the level order traversal output "<<endl;
    buildFromlevelOrder(root);
   levelOrderTraversal(root);
    // cout<<"In oder :";
    // inorder(root);
    // cout<<endl;
    // cout<<"Pre oder :";
    // preorder(root);
    // cout<<endl;
    // cout<<"Post order :";
    // postorder(root);
    // cout<<endl;
    return 0;
}