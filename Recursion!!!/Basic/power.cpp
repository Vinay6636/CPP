#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;
int power(int a,int b){
    if(b==0) return 1;
    if(b==1) return a;
    int ans = power(a,b/2);
    if((b&1)==0) return ans*ans;
    else return a*ans*ans;
}


int main(){
    int a,b;
    cin>>a>>b;
    int ans = power(a,b);
    cout<<ans<<endl;
    return 0;
}