#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

int height(Node* root){
        if(root == NULL ) return 0;
        int left = height(root->left);
        int right = height(root->right);
        return max(left,right)+1;
}
bool isBalanced(Node *root)
    {
        if(root == NULL) return true;
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        bool diff = abs(height(root->left) - height(root->right)) <=1;
        if(left && right && diff) return true;
        else return false;
}

// Method 2
pair<bool, int> isBalancedFast(Node* root) {
                // base case
        if(root == NULL)
        {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
        
        pair<int,int> left = isBalancedFast(root->left);
        pair<int,int> right = isBalancedFast(root->right);
        
        
        bool leftAns = left.first;
        bool rightAns = right.first;
        
        bool diff = abs (left.second - right.second ) <=1;
        
        pair<bool,int> ans;
        ans.second = max(left.second, right.second) + 1;
        
        if(leftAns && rightAns && diff) {
           ans.first = true;
        }
        else
        {
            ans.first = false;
        }
        return ans;
    }
    bool isBalanced(Node *root)
    {
        return isBalancedFast(root).first;
    }


int main(){
    
    return 0;
}