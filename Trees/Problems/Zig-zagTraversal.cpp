#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int> sol;
    	if(root == NULL) return sol;
    	queue<Node*> q;
    	q.push(root);
    	bool lefttoRight = true;
    	while(!q.empty()){
    	    int size = q.size();
    	    vector<int> ans(size);
    	    
    	    for(int i=0;i<size;i++){
    	        Node* frontNode = q.front();
    	        q.pop();
    	        
    	        int index = lefttoRight ? i: size-i-1;
    	        ans[index] = frontNode -> data;
    	        
    	        if(frontNode -> left) q.push(frontNode -> left);
    	        if(frontNode -> right) q.push(frontNode -> right);
    	    }
    	    lefttoRight = !lefttoRight;
    	    for(auto i:ans) sol.push_back(i);
    	}
    	return sol;
    }

int main(){
    
    return 0;
}