#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll m=998244353;
int mex(set<int>& s){
    int m=0;
    while(s.count(m)) m++;
    return m;
}
int grundy(int len,vector<int>& dp){
    if(len==0) return 0;
    if(dp[len]!=-1) return dp[len];
    set<int> reach;
    for(int i=0;i<len;i++){
        int lel=max(0,i-1);
        int rl=max(0,len-i-2);
        int lv=grundy(lel,dp);
        int rv=grundy(rl,dp);
        reach.emplace(lv^rv);
    }
    dp[len]=mex(reach);
    return dp[len];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int n=s.size();
    vector<int> v(n,0);
    for(int i=1;i<n-1;i++){
        if(s[i-1]==s[i+1]) v[i]=1;
    }
    vector<int> dp(n+1,-1);
    dp[0]=0;
    int totalxor=0;
    for(int i=0;i<n;){
        if(v[i]==0){
            i++;
            continue;
        }
        int st=i;
        while(i<n&&v[i]==1) i++;
        int sz=i-st;
        totalxor^=grundy(sz,dp);
    }
    if(totalxor==0){
        cout<<"Second\n";
        return 0;
    }
    cout<<"First\n";
    for(int i=0;i<n;){
         if(v[i]==0){
            i++;
            continue;
        }
        int st=i;
        while(i<n&&v[i]==1) i++;
        int sz=i-st;
        for(int j=0;j<sz;j++){
            int lel=max(0,j-1);
            int rl=max(0,sz-j-2);
            int lv=grundy(lel,dp);
            int rv=grundy(rl,dp);
            int val=lv^rv^totalxor^grundy(sz,dp);
            if(val==0){
                cout<<st+j+1<<endl;
                return 0;
            }
        }
    }
    return 0;
}
