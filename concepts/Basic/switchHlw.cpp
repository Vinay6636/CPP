#include <bits/stdc++.h>
using namespace std;

int main(){
    int money;
    cin>>money;
    int notes;
    switch(1){
        case 1:if(money>=100){
            notes=money/100;
            money%=100;
            cout<<"Rs 100 notes are "<<notes<<endl;
        }
        case 2:if(money>=50){
            notes=money/50;
            money%=50;
            cout<<"Rs 50 notes are "<<notes<<endl;
        }
        case 3:if(money>=20){
            notes=money/20;
            money%=20;
            cout<<"Rs 20 notes are "<<notes<<endl;
        }
        case 4:if(money>=10){
            notes=money/10;
            money%=10;
            cout<<"Rs 10 notes are "<<notes<<endl;
        }
    }
    return 0;
}