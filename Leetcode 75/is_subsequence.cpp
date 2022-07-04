#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        vector<int> v1;
        while(i<s.length() && j<t.length()){
            if(s[i]==t[j]){
                v1.push_back(j);
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        
        vector<int> v2(v1);
        sort(v2.begin(),v2.end());
        if(v2==v1 && v2.size()==s.length()){
            return true;
        }
        else{
            return false;
        }
    }
};