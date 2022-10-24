#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

class Hero{
    public: 
    int n;
    static string name;
    char ch;
    Hero(){
        cout<<"Simple constructor called"<<endl;
    }
    void setNumber(int n){
        this->n=n;
    }
    void setchar(char ch){
        this->ch=ch;
    }
    int getNumber(){
        return n;
    }
    char getchar(){
        return ch;
    }

};

string Hero::name="vinay";
// static functions are accessed by static members
int main(){
    cout<<Hero::name<<endl;
    // Hero l;
    // l.setchar('v');
    // l.setNumber(36);
    // l.getNumber();
    // l.getchar();

    return 0;
}