#include <bits/stdc++.h>
using namespace std;


    bool uniqueOccurrences(vector<int>& arr) {
      map<int,int> m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        vector<int> v;
        for(auto it:m){
            v.push_back(it.second);
        }
        int count=0;
        for(int i=0;i<v.size()-1;i++){
            for(int j=i+1;j<v.size();j++){
            if(v.size()==2){
                if(v[i]!=v[j]){
                    return true;
                }
                else{
                    return false;
                }
            }
            if(v[i]==v[j]){
                count++;
            }
            if(count==1){
                return false;
            }
            }
            
            // if(v.size()%2==0){
            //     if(count==v.size()-1){
            //         return true;
            //     }
            //     else{
            //         return false;
            //     }
            // }
            // else{
            //     if(count==v.size()-1){
            //         return true;
            //     }
            //     else{
            //         return false;
            //     }
            // }
        }
        return true;
    }

int main(){
    
    return 0;
}