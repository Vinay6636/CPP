#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

void solve(stack<int>&inputStack,int count, int size){
    if(count == size/2){
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
    inputStack.pop();
    solve(inputStack,count+1,size);
    inputStack.push(num);
}
void deleteMiddle(stack<int>&inputStack, int N){
    int count = 0;
    solve(inputStack,count,N);
   
}


int main(){
    
    return 0;
}