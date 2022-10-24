#include <bits/stdc++.h>
using namespace std;

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        
        int sr=0;
        int sc=0;
        int er=row-1;
        int ec=col-1;
        
        int c=0;
        int tCount=row*col;
        
        while(c<tCount){
            for(int i  = sc;c<tCount && i<=ec;i++){
                ans.push_back(matrix[sr][i]);
                c++;
            }
            sr++;
            for(int i = sr;c<tCount && i <=er;i++){
                ans.push_back(matrix[i][ec]);
                c++;
            }
            ec--;
            for(int i= ec ; c<tCount && i>=sc;i--){
                ans.push_back(matrix[er][i]);
                c++;
            }
            er--;
            for(int i= er;c<tCount &&i>=sr;i--){
                ans.push_back(matrix[i][sc]);
                c++;
            }
            sc++;
        }
        return ans;


int main(){
    
    return 0;
}