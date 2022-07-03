#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        set<int> unique(nums.begin(),nums.end());
        
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