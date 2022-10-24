#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={2,3,4,5,6};
    char ar[6]="abcde";
    cout<<arr<<endl;
    cout<< ar <<endl;// It Returns the value of the array.
    char *ptr = &ar[0];
    cout<<ptr<<endl; // prints entire string 
    return 0;
}