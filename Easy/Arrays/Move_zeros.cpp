#include<bits/stdc++.h>
#include<vector.h>
#include<set.h>

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count_of_zeros=count(nums.begin(),nums.end(),0);
        
        nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());
        for(int i=0;i<count_of_zeros;i++){
            nums.push_back(0);
        }
    }
};