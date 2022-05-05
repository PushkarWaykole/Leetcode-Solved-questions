#include<bits/stdc++.h>
#include<vector.h>
#include<set.h>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        set<int> unique;
        for(auto it:nums){
            unique.insert(it);
        }
        int majority=0;
        int appearMoreThan=nums.size()/2;
        for(auto it:unique){
            if(count(nums.begin(),nums.end(),it)>appearMoreThan){
                majority=it;
            }
        }
        return majority;
    }
};