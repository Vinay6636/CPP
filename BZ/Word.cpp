 #include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    int c,l=0;
    for(int i=0;i<a.size();i++){
        if(a[i]>='A' && a[i]<='Z'){
            c++;
        }
        else if(a[i]>='a' && a[i]<='z'){
            l++;
        }
    }
    if(c>l){
        transform(a.begin(),a.end(),a.begin(),::toupper);
    }
    else {
        transform(a.begin(),a.end(),a.begin(),::tolower);
    }
    cout<<a<<endl;
    return 0;
}