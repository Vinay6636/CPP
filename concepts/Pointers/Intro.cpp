#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int num = 5;
    cout<<num<<endl;
    // Address off operator --->  &
    cout<< &num<<endl;
    // Pointer : It stores the address of another variable.
    int *ptr = &num;   // p is a pointer to int.
    // * --> Dereference Operator which returns the value at address.
    cout<<ptr<<" "<<*ptr<<endl;

    cout<<" size of integer is "<<sizeof(num)<<endl;
    cout<<" size of pointer is "<<sizeof(ptr)<<endl; // For any datatype the size of the pointer is always is 8.
    // That is address . It is in Hexadecimal format.
    
    return 0;
}