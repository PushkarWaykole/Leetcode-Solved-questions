#include <bits/stdc++.h>
using namespace std;

int countAstrick(string s)
{
    int n = s.size();
    vector<int> idx;

    for (int i = 0; i < n; i++)
    {
        if(s[i]=='|'){
            idx.push_back(i);
        }
    }

    int ln=idx.size();

    int ans=0;
    vector<int> a(n,0);
    for(int i=0;i<n;i++){
        if(s[i]=='*'){
            a[i]=1;
            ans++;
        }


    }

    for(int i=0;i<ln;i++){
        a[i]+=a[i-1];
    }

    for(int i=0;i<ln;i+=2){
        ans-=a[idx[i+1]]-a[idx[i]];
    }
    return ans;
}

int main()
{
    string s="l|*e*rt|c**o|*de";
    int ans=countAstrick(s);
    cout<<ans<<endl;
    return 0;
}