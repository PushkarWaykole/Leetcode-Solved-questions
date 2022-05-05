#include<bits/stdc++.h>
#include<vector.h>
#include<set.h>


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> result;
        if(nums.size()==0){
            return {};
        }
        
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if((i != j && i != k && j != k) && (nums[i]+nums[j]+nums[k])==0){
                        vector<int> triplet;
                        triplet.push_back(nums[i]);
                        triplet.push_back(nums[j]);
                        triplet.push_back(nums[k]);
                        result.push_back(triplet);
                    }
                }
            }
        }
        
        set<vector<int>> answer;
        answer.insert(result.begin(),result.end());
        vector<vector<int>> pakka;
        for(auto it:answer){
            pakka.push_back(it);
        }
        return pakka;
    }
};