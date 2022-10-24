#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;
int getSum(int arr[],int size){
    if(size == 0) return 0;
    if(size == 1) return arr[0];
    int sum = arr[0];
    sum+=getSum(arr+1,size-1);
    return sum;

}
int main(){
    int arr[1]={2};
    cout<<getSum(arr,1)<<endl;
    return 0;
}