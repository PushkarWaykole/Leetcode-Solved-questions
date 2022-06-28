#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        
        
        //Time Complexity - O(N)
        //Space Compllexity - O(1)
        
        int temp=0,j=0,flag=0;
        for(int i=0;i<nums.size() ;i++)
        {
            if(nums[i] == 0) flag++;
            else
            {
                nums[j]=nums[i];
                j++;
            }
        }
        for(int i=0;i<flag;i++)
        {  nums[j]=0; j++;}  
    }
};