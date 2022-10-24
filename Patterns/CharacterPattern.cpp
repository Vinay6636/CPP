#include <bits/stdc++.h>
using namespace std;


void pattern11(int n){
    int i=1;
    while (i<=n)
    {
         int j=1;
        while(j<=n){
            char ch ='A'+i-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern12(int n){
    int i=1;
    while (i<=n)
    {
         int j=1;
        while(j<=n){
            char ch ='A'+j-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern13(int n){
    int i=1;
    char ch ='A';
    while (i<=n)
    {
        int j=1;
        while(j<=n){
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern14(int n){
    int i=1;
    while (i<=n)
    {
        int j=1;
        char ch ='A'+i-1;
        while(j<=n){
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
void pattern15(int n){
    int i=1;
    while (i<=n)
    {
        int j=1;
        char ch ='A'+i-1;
        while(j<=i){
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern16(int n){
    int i=1;
    char ch ='A';
    while (i<=n)
    {
        int j=1;
        while(j<=i){
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern17(int n){
    int i=1;
    while (i<=n)
    {
        int j=1;
        char ch ='A'+i-1;
        while(j<=i){
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern18(int n){
    int i=1;
    while (i<=n)
    {
        int j=1;
        char ch ='A'+n-i;
        while(j<=i){
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern19(int n){
    int i=1;
    while (i<=n)
    {
        int j=1;
        char ch ='A'+i-1;
        while(j<=n){
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}

int main(){
    int n;
    cin>>n;
    pattern19(n);
    return 0;
}