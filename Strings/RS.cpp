#include <bits/stdc++.h>
using namespace std;
void reverseWord(string s){
    int n=s.length();
    int st=0,temp;
    for(int i=0;i<=n;i++){
        if(s[i]==32|| s[i]=='\0'){
            int e=i-1;
            while(st<=e){
                // temp=s[st];
                // s[st]=s[e];
                // s[e]=temp;
                // st++;
                // e--;
                swap(s[st++],s[e--]);
            }
            st=i+1;
        }
    }
    cout<<s<<endl;
}

int main(){
    string s="my name is vinay";
    
    reverseWord(s);
    //cout<<s<<endl;
    return 0;
}