#include<bits/stdc++.h>
#include<vector.h>
#include<set.h>

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int answer=0;
        
        //Xor of same numbers is 0 and xor of 0 and any number is the number itself s.so now each number is appearing twice except one that means xor of all numbers appearing twice will be 0 and 0^ unique number will be the unique number itself
        for(auto it:nums){
            answer=answer^it;
        }
        return answer;
    }
};