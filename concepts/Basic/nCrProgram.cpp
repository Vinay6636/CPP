#include <bits/stdc++.h>
using namespace std;

int fact(int num){
    int ans = 1;
    for(int i=1;i<=num;i++){
        ans*=i;
    }
    return ans;
}

int ncr(int n,int r){
    int nm = fact(n);
    int dm = fact(r)* fact(n-r);
    return nm/dm;
}

int main(){
    int a ,b;
    cin>>a>>b;
    cout<<ncr(a,b)<<endl;
    return 0;
} 