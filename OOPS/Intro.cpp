#include <bits/stdc++.h>
// #include "Demo.cpp"
using namespace std;
#define ll long long

//Constants
//const ll PI= 3.141592653589793238
// Access Modifiers : 1.public  2.private  3.Protected
// Note : By default all are private are in the class.
// padding && greedy alignment
class Vinay1{
    public: 
    int n;
    // private:
    char ch;
};


int main(){
    //static allocation of a object
    //Vinay v;

    // Dynamic allocation
    Vinay1 *h = new Vinay1;
    // v.n=6726;
    // v.ch = 'l';

    (*h).n=6636;
    (*h).ch ='v';
   // cout<<"size of "<<sizeof(h1)<<endl;

//    cout<<(v).n<<endl; //Because by default all are private in a class.
//     cout<<(v).ch<<endl;


    cout<<(*h).n<<endl; //Because by default all are private in a class.
    cout<<(*h).ch<<endl; // another way is 

    cout<<h->n<<endl;
    cout<<h->ch<<endl;
    return 0;
}