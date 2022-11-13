#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;
/*
  Queue is a data structure which follows the FIFO order.
  Insertion is done at the  back.
  Deletion is done at the front .
  It can be implemented by Arrays and LinkedLists.
*/

// #include <bits/stdc++.h> 
class Queue {
    
    int* arr;
    int qfront;
    int rear; 
    int size;
    
public:
    Queue() {
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qfront == rear) {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data) {
        if(rear == size)
            cout << "Queue is Full" << endl;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(qfront == rear) {
            return -1;
        }
        else
        {    int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront==rear){
                qfront = 0;
                rear = 0;
            }
         return ans;
        }
    }

    int front() {
        if(qfront == rear) {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
};


int main(){
    // queue<int> q;
    // q.push(11);cout<<q.front()<<endl;
    // q.push(63);cout<<q.front()<<endl;
    // q.push(83);cout<<q.front()<<endl;
    // cout<<q.size()<<endl;
    // cout<<q.empty()<<endl;
    return 0;
}