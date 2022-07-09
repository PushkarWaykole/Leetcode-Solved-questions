#include <bits/stdc++.h>
using namespace std;

bool magic(int arr[],int p,int start){
    for(int i=start;i<p;i++){
        if(arr[i]!=p){
            return false;
        }
    }
    return true;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	   // vector<int> arr;
	   int arr[n];
	    
	    for(int i=0;i<n;i++){
	       // int temp;
	       // cin>>temp;
	       // arr.push_back(temp);
	       cin>>arr[i];
	    }
	    
	    sort(arr,arr+n);
	    bool ans=true;
	    int start=0;
	    while(start!=n){
	        bool temp=magic(arr,arr[start],start);
	        // cout<<temp<<" "<<start<<endl;
	        if(temp==false){
	            ans=false;
	            
	        }
	        start+=arr[start];
	    }
	    if(ans!=true){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
