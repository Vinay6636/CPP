#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

class A{
    public:
     void display(){
        cout<<"I'm  the parent class"<<endl;
     }
};

class B : public A{

};

class C : public A{

};



int main(){
    B b;
    C c;
    b.display();
    c.display();
    return 0;
}