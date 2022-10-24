/*
  Strings in c++ --> 1-dimensional char arrays


*/
#include <bits/stdc++.h>
using namespace std;

int getLength(char name[]){
  int count=0;
  for(int i=0;name[i]!='\0';i++){
    count++;
  }
  return count;
}

void reverse(char name[],int  n){
  int s=0,e=n-1;
  while(s<=e){
    swap(name[s++],name[e--]);
  }
}

bool checkPalindrome(char a[],int n){
  int s=0,e=n-1;
  while(s<=e){
    if(toLowecase(a[s])!=toLowecase(a[e])){
      return 0;
    } 
    else {
       s++;
       e---;
    }
  }
  return 1;
}

int main(){
    char name[20];
    //Input
    cin>>name;
    //Output
    cout<<name<<endl;  //It stops execution when its hit [null character]space ,tab and enter.
    // Null character --> '\0' .It uses as a terminator.
    // cout<<getLength(name)<<endl;
    reverse(name,getLength(name));
    cout<<name<<endl;
    cout<<checkPalindrome(name,getLength(name))<<endl;
    return 0;
}