#include <bits/stdc++.h>
using namespace std;
void pattern1(int n){
    int i=1;
    while (i<=n)
    {
        int j=1;
        while(j<=n){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern2(int n){
    int i=1;
    while (i<=n)
    {
        int j=1;
        while(j<=n){
            cout<<i; 
            j++;
        }
        cout<<endl;
        i++;
    }
}
void pattern3(int n){
    int i=1;
    while (i<=n)
    {
        int j=1;
        while(j<=n){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
}
void pattern4(int n){
    int i=1;
    while (i<=n)
    {
        int j=1;
        while(j<=n){
            cout<<n-j+1;//to print in reverse order.
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern5(int n){
    int i=1;
    int k=1;
    while (i<=n)
    {
         int j=1;
        while(j<=n){
            cout<<k<<" ";
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
void pattern6(int n){
    int i=1;
    while (i<=n)
    {
         int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}
void pattern7(int n){
    int i=1;
    while (i<=n)
    {
         int j=1;
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern8(int n){
    int i=1;
    int k=1;
    while (i<=n)
    {
         int j=1;
        while(j<=i){
            cout<<k;
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern9(int n){
    int i=1;
    while (i<=n)
    {
         int j=1;
        // int k=i;
        while(j<=i){
            cout<<i+j-1;
           // k++;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern10(int n){
    int i=1;
    while (i<=n)
    {
         int j=1;
         //int k=i;
        while(j<=i){
            cout<<i-j+1;
            //k--;
            j++;
        }
        cout<<endl;
        i++;
    }
}

int main(){
    int n;
    cin>>n;
    pattern10(n);
    return 0;
}