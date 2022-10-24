#include <bits/stdc++.h>
using namespace std;
char getMaxOccur(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        char ch =s[i];
        int number=0;
        // lowercase
        if(ch >= 'a' && ch<='z'){
             number = ch-'a';
        }
        else{
            number = ch-'A';
        }
        arr[number]++;
    }
    int maxi=-1,ans=-1;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    char sol = 'a'+ans;
    return sol;
}

char getMaxOccuringChar(string str)
    {
        // Your code here
        int arr[26]={0};
        for(int i=0;i<str.length();i++){
            arr[str[i]-'a']++;
        }
        int ans,maxi=-1;
        for(int i=0;i<26;i++){
            if(maxi<arr[i]){
                ans=i;
                maxi=arr[i];
            }
        }
        return 'a'+ans;
    }

int main(){
    string s="vinayaaa";
    cout<<getMaxOccur(s)<<endl;

    return 0;
}