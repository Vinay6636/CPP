#include <bits/stdc++.h>
using namespace std;

int isPrime(long long n){
    if(n<=1){
        return 0;
    }
    long long c=2;
    while(c*c<=n){
        if(n%c==0) return 0;
        c++;
    }
    return 1;
}

int main(){
    long long m,n;
    cin>>m>>n;
    long long count=0;
    for(long long i=m;i<=n;i++){
        if(isPrime(i)) count++;
    }
    cout<<count<<endl;
    return 0;
}