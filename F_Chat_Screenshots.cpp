#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
int n,k;
bool dfs(vector<vector<int>> v,int n){
    vector<int> in(n,0);
    for(int i=0;i<n;i++){
        for(auto it:v[i]){
            in[it]++;
        }
    }
    queue<int> q;
    for(int i=0;i<n;i++){
        if(in[i]==0) q.push(i);
    }
    int idx=0;
    while(!q.empty()){
        int el=q.front();
        q.pop();
        idx++;
        for(auto it: v[el]){
            in[it]--;
            if(in[it]==0) q.push(it);
        }
    }
    if(idx!=n) return false;
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        v=vector<vector<int>>(n);
        for(int i=0;i<k;i++){
            int x,el;
            cin>>x;
            x--;
            for(int j=2;j<=n;j++){
               el=x;
               cin>>x;
               x--;
               if(j==2) continue;
               v[el].push_back(x);
            }
        }
        if(dfs(v,n)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}