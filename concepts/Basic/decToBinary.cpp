// #include <bits/stdc++.h>
// using  namespace std;

// int main(){
//     int n;
//     cin>>n;
//     float ans =0;
//     int i=0;
//     while(n!=0){
//         int bit = n & 1;
//         ans =(bit*pow(10,i)) + ans;
//         n = n >> 1;
//         i++;
//     } 
//     cout<<ans<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int DecimalToBinary(int);
int main()
{
    int decimalNum, binaryNum;
    cout<<"Enter the Decimal Number: ";
    cin>>decimalNum;
    binaryNum = DecimalToBinary(decimalNum);
    cout<<"\nEquivalent Binary Value: "<<binaryNum;
    cout<<endl;
    return 0;
}
int DecimalToBinary(int decimalNum)
{
    int binaryNum=0, mul=1, rem;
    while(decimalNum>0)
    {
        rem = decimalNum%2;
        binaryNum = binaryNum+(rem*mul);
        mul = mul*10;
        decimalNum = decimalNum/2;
    }
    return binaryNum;
}