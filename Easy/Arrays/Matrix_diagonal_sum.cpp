#include<bits/stdc++.h>
#include<vector.h>
#include<set.h>

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int primary=0,secondary=0;
        int answer=0;
        for(int i=0;i<n;i++){
            primary+=mat[i][i];
        }
        
        for(int i=n-1;i>=0;i--){
            secondary+=mat[n-i-1][i];
        }
        //if odd number of rows and columns
        if(n%2!=0){
            int centerElem=mat[n/2][n/2];
            answer=primary+secondary-centerElem;
        }
        
        //if even number of rows and columns
        else if(n%2==0){
            answer=primary+secondary;
        }
        return answer;
        
    }
};