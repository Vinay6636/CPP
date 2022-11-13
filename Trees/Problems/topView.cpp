#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

vector<int> topView(Node *root)
    {
        vector<int> ans;
        if(root == NULL) return ans;
        map<int,int> topNode;
        queue<pair<Node*, int > > q;
        q.push(make_pair(root,0));
        while(!q.empty()){
            pair<Node*, int > temp = q.front(); 
            q.pop();
            Node* frontNode =temp.first;
            int hd = temp.second;
            if(topNode.find(hd)==topNode.end()) topNode[hd] = frontNode->data;
            if(frontNode->left) q.push(make_pair(frontNode->left,hd-1));
            if(frontNode->right) q.push(make_pair(frontNode->right,hd+1));
        }
        for(auto i:topNode) ans.push_back(i.second);
        return ans;
}
// Botttom View
vector <int> bottomView(Node *root) {
        vector<int> ans;
        if(root == NULL) return ans;
        map<int,int> topNode;
        queue<pair<Node*, int > > q;
        q.push(make_pair(root,0));
        while(!q.empty()){
            pair<Node*, int > temp = q.front(); 
            q.pop();
            Node* frontNode =temp.first;
            int hd = temp.second;
            topNode[hd] = frontNode->data;
            if(frontNode->left) q.push(make_pair(frontNode->left,hd-1));
            if(frontNode->right) q.push(make_pair(frontNode->right,hd+1));
        }
        for(auto i:topNode) ans.push_back(i.second);
        return ans;
    }

// left  View
void solve(Node* root,vector<int> &ans,int level){
    if(root==NULL) return;
    if(level == ans.size()) ans.push_back(root->data);
    solve(root->left,ans,level+1);
    solve(root->right,ans,level+1);
}
vector<int> leftView(Node *root)
{
   vector<int> ans;
   solve(root,ans,0);
   return ans;
}
// Right view
void solve(Node* root,vector<int> &ans,int level){
        if(root == NULL) return ;
        if(level == ans.size()) ans.push_back(root->data);
        solve(root->right,ans,level+1);
        solve(root->left,ans,level+1);
    }
    vector<int> rightView(Node *root)
    {
       vector<int> ans;
       solve(root,ans,0);
       return ans;
    }

int main(){
    
    return 0;
}