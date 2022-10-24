#include <bits/stdc++.h>
#include <array>
using namespace std;

int main(){
    int arr[4] = {1,2,3,4};
    array<int,4> a ={1,2,3,4};   // This stl array  is implemented by the  help of  above normal array only.
    // It is also a static array.[Same as normal array]


    // We can  directly get the size of the array by size() function.
    int size = a.size();
    for(int i=0;i<size;i++) cout<<a[i] <<" ";

    cout<<endl;
    // We can directly find the element in array by using at() function
    cout<<"Element at index 2: "<<a.at(2)<<endl;

    // We can find whether the array is empty or not by using empty() function .It returns bool value .

    cout<<"Array is Empty or Not" <<a.empty()<<endl;

    // We can retrive the front and back elements in array by using front() and back() functions.
    cout<<"First Element "<<a.front()<<endl;
    cout<<"Second Element "<<a.back()<<endl;


    return 0;
}