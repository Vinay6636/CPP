#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;
void reverseStr(string &str,int s,int e){
    if(s>e) return;
    swap(str[s],str[e]);
    s++;e--;
    reverseStr(str,s,e);
}
void reverseStr2(string &str,int e){
    int i=0;
    if(i>=e/2) return;
    swap(str[i],str[e-i-1]);
    i++;
    reverseStr2(str,e);
}

int main(){
    string name = "Vinay";
    reverseStr(name,0,name.size()-1);
    cout<<name<<endl;
    return 0;
}