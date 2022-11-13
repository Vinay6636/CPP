#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

bool findRedundantBrackets(string &s)
{
    stack<char> st;
    for(int i=0;i<s.size();i++){
        char ch = s[i];
        if(ch == '(' ||ch == '+' ||ch == '-' ||ch == '*' ||ch == '/'){
           st.push(ch); 
        }
        else{
            if(ch == ')'){
                bool isRedundant = true;
                while(st.top()!='('){
                    char top = st.top();
                    if(top == '+' ||top == '-' ||top == '*' ||top == '/'){
                        isRedundant = false;
                    }
                    st.pop();
                }
                if(isRedundant == true) return true;
                st.pop();
            }
        }
    }
    return false;
}


int main(){
    
    return 0;
}