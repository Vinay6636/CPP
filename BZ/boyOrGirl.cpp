#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    map<char,int> m;
    for(int i=0;i<a.size();i++){
        m[a[i]]++;
    }
    if(m.size()&1){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }
    return 0;
}