#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

void solve(string str,string output,int index,vector<string> &ans){
    if(index >= str.size()){
        if(output.size()>0)
            ans.push_back(output);
        return;
    }
    solve(str,output,index+1,ans);
    output.push_back(str[index]);
    solve(str,output,index+1,ans);
}

vector<string> subsequences(string str){
	
	// Write your code here
	vector<string> ans;
    string output = "";
    int index=0;
    solve(str,output,index,ans);
    return ans;
}


int main(){
    
    return 0;
}