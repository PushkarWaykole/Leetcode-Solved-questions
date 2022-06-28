#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> s(heights);
        int count=0;
        sort(heights.begin(),heights.end());
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=s[i]){
                count++;
            }
        }
        return count;
    }
};