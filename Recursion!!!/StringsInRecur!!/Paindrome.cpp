#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;
bool chkPalindrome(string str,int s,int e){
    if(s>e) return true;
    if(str[s]!=str[e]) return false;
    return chkPalindrome(str,s+1,e-1);
}
bool chkPalindrome1(string str,int e){
    int i=0;
    if(i>=e/2) return true;
    if(str[i]!=str[e-i-1]) return false;
    i++;
   return chkPalindrome1(str,e);
}
int main(){
    string s = "abbba";
    bool ans = chkPalindrome1(s,s.size());
    if(ans) cout<<"Answer is palindrome"<<endl;
    else cout<<"Answer is not a palindrome"<<endl;
    return 0;
}