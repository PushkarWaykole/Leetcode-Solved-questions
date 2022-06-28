#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int get_max(vector<int> arr,int s){
        int max=0;
        for(int i=s;i<arr.size();i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
    vector<int> replaceElements(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            if(i==arr.size()-1){
                arr[i]=-1;
            }
            else{
                int temp=get_max(arr,i+1);
                arr[i]=temp;
            }
        }
        
        return arr;
    }
};