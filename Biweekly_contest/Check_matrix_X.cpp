
#include<bits/stdc++.h>
using namespace std;

bool checkXMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<bool>> visited(n,vector<bool> (n,false));
        bool is_true=true;
        //lower right diagonal
        for(int i=0;i<n;i++){
            if(grid[i][i]==0 && visited[i][i]==false){
                is_true=false;
            }
            else{
                visited[i][i]=true;
            }
        }
        //lower left diagonal
        int i=0,j=n-1;
        while(i<n && j>=0){
            if(grid[i][j]==0 && visited[i][j]==false){
                is_true=false;
                
            }
            else{
                visited[i][j]=true;
            }
            i++;
            j--;
        }
        
        long long sum=0;
        if(is_true){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(visited[i][j]==false){
                        sum+=grid[i][j];
                        cout<<grid[i][j]<<endl;
                    }
                }
            }
        }
        cout<<sum<<endl;
        if(is_true && sum==0){
            return true;
        }
        else{
            return false;
        }
        
    }

int main(){
    vector<vector<int>> grid{{5,7,1},{0,3,1},{2,5,2}};
    bool ans=checkXMatrix(grid);
    cout<<ans<<endl;
}
