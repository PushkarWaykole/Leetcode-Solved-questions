#include<bits/stdc++.h>
#include<vector.h>
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int customers=accounts.size();
        int banks=accounts[0].size();
        vector<int> wealth(customers);
        for(int i=0;i<customers;i++){
            
            int currWealth=0;
            for(int j=0;j<banks;j++){
                
                currWealth+=accounts[i][j];
            }
            wealth.emplace_back(currWealth);
        }
        int maxWealth=*max_element(wealth.begin(),wealth.end());
        
        return maxWealth;
    }
};