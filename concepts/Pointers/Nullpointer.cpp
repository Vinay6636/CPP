#include <bits/stdc++.h>
using namespace std;

int main(){
    // int *ptr ;  // It  points to some garbage value
    // cout<<*ptr<<endl;

    // int i=5;
    // int *p = 0 ; // A pointer pointing to null value
    // p= &i;
    // cout<<p<<" "<<*p<<endl;
    int num = 5;
    int a = num;
    a++;
    cout<<num<<endl;

    int *p = &num;
    cout<<" before "<<num<<endl;
    (*p)++;
    cout<<num<<endl;

    // Copying of pointer
    int *q = p;
    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl;

    // Pointer Arithmetic
    int i=3;
    int *t = &i;
    // cout << (*t)++ <<endl;
    *t = *t + 1;
    cout<<*t<<endl;
    cout<<" before t "<<t<<endl;
    t = t +1;
    cout<<" after t "<<t<<endl;


    return 0;
}