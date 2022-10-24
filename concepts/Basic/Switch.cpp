#include <bits/stdc++.h>
using namespace std;

int main(){
    int num=2;
    char ch ='1';
    switch(num){
        case 1:cout<<"first"<<endl;
               break;
        case 2:switch(ch){
            case '1' : cout<<"character one"<<endl;
            break;
        }
        break;
        default:cout<<"print"<<endl;
        
    }
    
    return 0;
}