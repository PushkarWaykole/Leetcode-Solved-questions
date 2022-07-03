#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> dp(nums.size());
        for(int i=0;i<nums.size();i++){
            if(i==0){
                dp[i]=nums[i];
            }
            else{
                int temp=nums[i]+dp[i-1];
                dp[i]=temp;
            }
        }
        return dp;
    }
};