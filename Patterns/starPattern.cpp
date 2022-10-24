#include <bits/stdc++.h>
using namespace std;

void pattern20(int n){
    int i=1;
    while(i<=n){
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern21(int n){
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}
void pattern22(int n){
    int i=1;
    while(i<=n){
        int space=i-1;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=n-i+1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern23(int n){
    int i=1;
    while(i<=n){
        int space=i-1;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=n-i+1){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern24(int n){
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern25(int n){
    int i=1;
    while(i<=n){
        int space=i-1;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        int k=i;
        while(j<=n-i+1){
            cout<<k;
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern26(int n){
    int i=1;
    int k=i;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
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

void pattern27(int n){
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }

        int start=i-1;
        while(start){
            cout<<start;
            start--;
        }

        cout<<endl;
        i++;
    }
}

void pattern28(int n){ //dabanng pattern
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
         
        int star=i-1;
        while(star){
            cout<<"**";
            star--;
        }
        int start =n-i+1;
        while(start){
            cout<<start;
            start--;
        }
        cout<<endl;
        i++;
    }
}

int main(){
    int n;
    cin>>n;
    pattern28(n);
    return 0;
}