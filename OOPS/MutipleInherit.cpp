#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

class Human{
    public:
    void speak(){
        cout<<"Speaking "<<endl;
    }
    void fun(){
        cout<<"HEllo"<<endl;
    }
};

class Dog{
    public:
    void bark(){
        cout<<"barking "<<endl;
    }
    void fun(){
        cout<<"HEllo"<<endl;
    }
};

class Hybrid :public Dog,public Human{

};

int main(){
    Hybrid n;
    n.speak();
    n.bark();        // Inheritance Ambuigity 
    n.Human::fun();  // Usage of scope resolution operator when both the classes have same method_names in it .

    return 0;
}