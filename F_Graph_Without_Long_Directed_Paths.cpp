#include <bits/stdc++.h>
using namespace std;
bool bi;
vector<int> color;
vector<pair<int,int>> p;
vector<int> e[200001];
void dfs(int v,int c){
    color[v]=c;
    for(auto it: e[v]){
        if(color[it]==-1){
            dfs(it,c^1);
        }
        else if(color[it]==c) bi=false;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    color=vector<int>(n,-1);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        x--,y--;
        e[x].push_back(y);
        e[y].push_back(x);
        p.push_back({x,y});
    }
    bi=true;
    dfs(0,0);
    if(bi==false) cout<<"NO\n";
    else{
        cout<<"YES\n";
        string s="";
        for(int i=0;i<m;i++){
            if(color[p[i].first]==1) s+='1';
            else s+='0';
        }
        cout<<s<<endl;
    }
}