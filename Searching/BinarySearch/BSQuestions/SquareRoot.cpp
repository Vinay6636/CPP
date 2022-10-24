#include <bits/stdc++.h>
using namespace std;

 long long int Binary_search(int k){
        int s=0;
        int e=k;
        long long int ans=-1;
        while(s<=e){
            long long int m =s+(e-s)/2;
            long long int square=m*m;
            if(square==k){
                return m;
            }
             if(square<k){
               ans=m;
               s=m+1;
            }
            else{
                e=m-1;
            }
        }
        return ans;
    }
    
    double morePrecision(int n,int precision,int squareroot){
        double factor=1,ans=squareroot;
        for(int i=0;i<precision;i++){
            factor=factor/10;
            for(double j=ans;j*j<n;j+=factor){
                ans=j;
            }
        }
        return ans;
    }

int main(){
    int n;
    cin>>n;
    int squareRoot = Binary_search(n);
    cout<<"Answer is :"<<morePrecision(n,4,squareRoot)<<endl; 
    return 0;
}