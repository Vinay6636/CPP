#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    // int i=1;
    // for(;i<=n;i++){
    //     cout<<i<<endl;
    // }

    // int i=1;
    // for(;i<=n;){
    //     cout<<i<<endl;
    //     i++;
    // }

  /*  int i=1;
    for(;;){   // infinite loop
        if(i<=n){
            cout<<i<<endl;
        }
        else{
            break;
        }
        i++;
    }
    */
   for(int a=0,b=1;a>=0 && b>=1;a--,b--){
    cout <<a<<" "<<b<<endl;
   }

    return 0;
}