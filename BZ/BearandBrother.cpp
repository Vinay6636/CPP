#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    static int c;
    while(a>b){
        a=a*3;
        b=b*2;
        c+=1;
        if(a>b){
            break;
        }
    }
    cout<<c<<endl;
    return 0;
}