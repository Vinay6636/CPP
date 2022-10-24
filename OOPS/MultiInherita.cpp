#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;


class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking "<<endl;
    }
};

class Dog: public Animal{

};

class GermanShephard :public Dog{

};



int main(){
    GermanShephard g;
    g.speak();
    return 0;
}