#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int i,j,a,b,c,n=arr.size(),l,r;
        vector<int> ret(n);
        
        l = 0;
        r = n-1;
        
        i = n-1;
        while(l<=r) {
            if(abs(arr[l]) >= abs(arr[r])) {
                a = arr[l]*arr[l];
                l++;
            }
            else {
                a = arr[r]*arr[r];
                r--;
            }
            ret[i] = a;
            i--;
        }
        
        return ret;
    }
};