#include<bits/stdc++.h>
using namespace std;


class MyHashMap {
public:
    vector<pair<int,int>> mpp;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        
        for(int i=0;i<mpp.size();i++){
            if(mpp[i].first==key){
                mpp[i].second=value;
                return;
            }
        }
        mpp.push_back({key,value});
    }
    
    int get(int key) {
        int ans=-1;
        for(auto it:mpp){
            if(it.first==key){
                ans=it.second;
                break;
            }
        }
        return ans;
    }
    
    void remove(int key) {
        int check=get(key);
        int index=-1;
        for(int i=0;i<mpp.size();i++){
            if(mpp[i].first==key){
                index=i;
                break;
            }
        }
        if(check!=-1 && index!=-1){
            mpp.erase(mpp.begin()+index);
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */