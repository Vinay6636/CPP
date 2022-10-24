#include <bits/stdc++.h>
#include<queue>
using namespace std;

int main(){
    // Queue: It follows FIFO[First in first out]
    queue<string> q;

    q.push("S");
    q.push("V");
    q.push("L");
    cout<<q.size()<<endl;
    cout<<"First Element "<<q.front()<<endl;
    q.pop();

    cout<<q.size()<<endl;


    
    return 0;
}