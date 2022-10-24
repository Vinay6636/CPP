#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;


class Human{
    public:
      int height;
      int weight;
      int age;
    
    public:
      int getAge(){
        return this->age;
      }

      void setWeight(int w){
        this->weight=w;
      }


};

class Male : public Human{
    public:
      string colour;

    void sleep(){
        cout<<"Male is sleeping "<<endl;
    }


};


int main(){
    Male o1;
    o1.setWeight(82);
    cout<<o1.age<<endl;
    cout<<o1.weight<<endl;
    cout<<o1.height<<endl;
    return 0;
}