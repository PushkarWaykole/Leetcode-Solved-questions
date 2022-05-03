#include<bits/stdc++.h>
#include<vector.h>
#include<set.h>

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        set<char> temp;
        for(int i=0;i<ransomNote.length();i++){
            temp.insert(ransomNote[i]);
        }
        
        for(auto it:temp){
            if(count(ransomNote.begin(),ransomNote.end(),it)>count(magazine.begin(),magazine.end(),it)){
                return false;
            }
        }
        return true;
    }
};