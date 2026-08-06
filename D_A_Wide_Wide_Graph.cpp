#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<int> getdist(int start,int n){
    vector<int> dist(n+1,-1);
    queue<int> q;
    dist[start]=0;
    q.push(start);
    while(!q.empty()){
        int el=q.front();
        q.pop();
        for(auto it:adj[el]){
            if(dist[it]==-1){
                dist[it]=dist[el]+1;
                q.push(it);
            }
        }
    }
    return dist;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    adj=vector<vector<int>>(n+1);
    for(int i=0;i<(n-1);i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int> temp=getdist(1,n);
    int a=1;
    for(int i=1;i<=n;i++){
        if(temp[i]>temp[a]) a=i;
    }
    vector<int> s1=getdist(a,n);
    int b=1;
    for(int i=1;i<=n;i++){
        if(s1[i]>s1[b]) b=i;
    }
    int d=s1[b];
    vector<int> s2=getdist(b,n);
    vector<int> ans(n+1);
    for(int i=d+1;i<=n;i++) ans[i]=n;
    vector<int> far(n+1);
    for(int i=1;i<=n;i++){
        int f=max(s1[i],s2[i]);
        far[f]++;
    }
    int reach=0;
    for(int i=d;i>=1;i--){
        reach+=far[i];
        ans[i]=1+n-reach;
    }
    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
    return 0;
}