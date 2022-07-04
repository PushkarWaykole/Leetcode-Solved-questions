#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void insertionSort(vector<int>& nums)
{
    int n=nums.size();
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = nums[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && nums[j] > key)
        {
            nums[j + 1] = nums[j];
            j = j - 1;
        }
        nums[j + 1] = key;
    }
}
    void sortColors(vector<int>& nums) {
        insertionSort(nums);
        
    }
};