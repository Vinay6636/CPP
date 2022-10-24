#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;


class B{
    public:
    int a;
    int b;

    public:
    void operator+( B &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"Output is : "<<value2 - value1<<endl;
    }

};
int main(){
    B obj1,obj2;
    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;
    return 0;
};
