#include<bits/stdc++.h>
#include<set.h>
#include<vector.h>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > set<int>(nums.begin(), nums.end()).size();        
    }
}