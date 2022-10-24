#include <bits/stdc++.h>
using namespace std;

int main(){ 
   // int n;cin>>n;
    int r,c;
    cin>>r>>c;
    // Declaration of 2d array of variable size array
    // int** arr = new int*[n];
    // for(int i=0;i<n;i++){
    //   arr[i] = new int[n];
    // }  

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>arr[i][j];
    //     }
    // }


    int** arr = new int*[r];
    for(int i=0;i<r;i++){
      arr[i] = new int[c];
    }  

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //releasing memory
    for(int i=0;i<r;i++){
        delete []arr;
    }
    delete []arr;
    return 0;
}