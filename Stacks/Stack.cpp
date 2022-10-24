#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

/*
 Stack : Stack is a data structure which follows LIFO(Last iin First Out) Operation.
 --> Inserting a element is called push.
 --> Deleting a element is called pop.
 --> Both insertion and deletion can be done at ending.
 --> peek/top returns the top element in the stack.
 --> Stack is implemented by arrays and linked-lists.
*/

class Stack{
    public:
     int *arr;
     int top;
     int size;
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }
     
    void push(int ele){
        if(size - top > 1){
            top++;
            arr[top] = ele;
        }
        else{
            cout<<" Stack Overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }
    int peek(){
        if(top>=0) return arr[top];
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top == -1) return true;
        return false;
    }

};

int main(){
    // crating a stack
    /*
    stack<int> s;
    s.push(2);
    s.push(3);
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    */
    Stack st(5);
    st.push(36);
    st.push(26);
    cout<<st.peek()<<endl;
    st.pop();
    st.push(54);
    cout<<st.peek()<<endl;
    
    return 0;
}