#include <bits/stdc++.h>
using namespace std;

int main(){
    // To get the particular value from a index = c * i + j.
    // create a 2d array
    int arr[3][4];
    // Taking row wise input 
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // Taking col rise input
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[j][i];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}