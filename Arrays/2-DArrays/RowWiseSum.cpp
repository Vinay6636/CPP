#include <bits/stdc++.h>
using namespace std;
int largestRowSum(int arr[][3],int r,int c){
    int row=r,col=c;
    int maxi=INT_MIN,index=-1;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            index=i;
            maxi=sum;
        }
    }
    return index;
}

int main(){
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    // Row wise sum
    // for(int i=0;i<r;i++){
    //     int sum=0;
    //     for(int j=0;j<c;j++){
    //         sum+=arr[i][j];
    //     }
    //     cout<<sum<<endl;
    // }
    int ans = largestRowSum(arr,3,3);
    cout<<ans<<endl;
    return 0;
}