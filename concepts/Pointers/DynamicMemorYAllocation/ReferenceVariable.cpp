#include <bits/stdc++.h>
using namespace std;

int main(){
    //Refernce Variable --> Same memory but it has differnet names.
    int i=5;
    int &j = i; // Creating a refernce variable.
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;
    
    return 0;
}