#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
//         int remcount=nums.size()-count(nums.begin(),nums.end(),val);
        
//         int temp=count(nums.begin(),nums.end(),val);
//         for(int i=0;i<temp;i++){
//             auto it=remove(nums.begin(),nums.end(),val);
//         }
//         return remcount;
        
        int i=0,j=0;
        while(i<nums.size()){
            if(nums[i]==val){
                i++;
            }
            else{
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
        }
        return j;
    }
};