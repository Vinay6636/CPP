#include <bits/stdc++.h>
using namespace std;

void power(){
    long long int b,p;
    scanf("%lld%lld",&b,&p);
    long long int t=1;
    while(p--) t*=b;
    printf("%lld",t);
}

int power(int a,int b){
    int ans =1;
    for(int i=1;i<=b;i++){
        ans*=a;
    }
    return ans;
}

int power1(){
    int a,b;
    cin>>a>>b;
    int ans =1;
    for(int i=1;i<=b;i++){
        ans*=a;
    }
    return ans;
}


int main(){ 
    // int a,b;
    // cin>>a>>b;
    // cout<<power(a,b)<<endl;
    cout<<power1()<<endl;
    return 0;
}