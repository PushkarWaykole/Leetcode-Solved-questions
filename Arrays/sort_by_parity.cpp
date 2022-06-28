#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void swap(vector<int> &arr,int r,int l){
        int temp=arr[r];
        arr[r]=arr[l];
        arr[l]=temp;
    }
    vector<int> sortArrayByParity(vector<int>& nums) {
        int r=0,l=0;
        while(r<nums.size()){
            if(nums[r]%2!=0){
                r++;
            }
            else{
                swap(nums,r,l);
                r++;
                l++;
            }
        }
        return nums;
    }
};

// 0 ms solution
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l = 0, size = nums.size();
        for (int i = 0; i < size; i++)
        {
            if(nums[i]%2 == 0)
            {
                swap(nums[l], nums[i]);
                l++;
            }
        }
        return nums;
    }
};