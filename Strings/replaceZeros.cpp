#include <bits/stdc++.h>
using namespace std;

string replaceSpaces(string &str){
	// Write your code here.
    string temp ="";
    for(int i=0;i<str.length();i++){
        if(str[i]==32){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;
}

string replaceSpaces1(string &str){
    for(int i=0;i<str.length();i++){
        if(str[i]==32){
            str.replace(i,i,"@40");
        }
    }
    return s;

}
int main(){
    string s = " my name is vinay";
    cout<<replaceSpaces(s)<<endl;
    return 0;
}