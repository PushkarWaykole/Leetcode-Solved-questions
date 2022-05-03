#include<bits/stdc++.h>
#include<vector.h>
#include<set.h>

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int m=nums1.size();
        int n=nums2.size();
        vector<int> result;
        int i=0,j=0;
        
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums2[j]<nums1[i]){
                j++;
            }
            else{
                result.push_back(nums2[j]);
                i++;
                j++;
            }
        }
        return result;
    }
};