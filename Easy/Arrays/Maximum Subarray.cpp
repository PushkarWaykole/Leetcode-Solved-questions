#include<bits/stdc++.h>
#include<vector.h>
#include<set.h>

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        long long Msum=0;
        long long Csum=0;
        long long Nsum=nums[0];
        long long count=0;
        for(long long i=0;i<nums.size();i++){
            Csum+=nums[i];
            if(Csum>Msum){
                Msum=Csum;
            }
            if(Csum<0){
                if(nums[i]>Nsum){
                    Nsum=nums[i];
                }
                Csum=0;
                count++;
            }
        }
        
        if(count==nums.size()){
            return Nsum;
        }
        else{
            return Msum;
        }

    }
        
    
};