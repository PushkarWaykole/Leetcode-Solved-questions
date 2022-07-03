#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
for(int i=0; i<t; i++){
int n,m;
cin>>n>>m;
int arr[n];
for(int j=0;j<n;j++){
    cin>>arr[j];
}

long long sum=accumulate(arr,arr+n,0);
int temp=sum/m;
long long ans=sum-m*temp;
cout<<"Case #"<<i<<": "<<ans<<endl;

}
}