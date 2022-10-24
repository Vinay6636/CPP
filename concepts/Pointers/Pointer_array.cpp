#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    int arr[10]={2,5,6,6,7,8,8,9};
    cout<<"Address of first block  is "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<&arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;

    int i = 3;
    cout<<i[arr]<<endl;
    
    */

   int temp[10];
   cout<<sizeof(temp)<<endl;
   int *ptr = &temp[0];
   cout<<sizeof(ptr)<<endl;  // Always address size is 8
   cout<<sizeof(*ptr)<<endl;
   cout<<sizeof(&ptr)<<endl;
    return 0;
}