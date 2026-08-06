#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int sr,sc,tr,tc;
    vector<vector<char>> v(n,vector<char> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
            if(v[i][j]=='S') sr=i,sc=j;
            if(v[i][j]=='T') tr=i,tc=j;
        }
    }
    vector<vector<vector<vector<bool>>>> visit(n,vector<vector<vector<bool>>> (m,vector<vector<bool>> 
    (4,vector<bool> (4))));
    queue<int> qx,qy,qdir,qcount,qdis;
    int a[]={-1,1,0,0},b[]={0,0,1,-1};
    for(int dir=0;dir<4;dir++){
        int nc=sc+b[dir];
        int nr=sr+a[dir];
        if(v[nr][nc]=='#') continue;
        qx.push(nr);
        qy.push(nc);
        qdir.push(dir);
        qdis.push(1);
        qcount.push(1);
        visit[nr][nc][dir][1]=1;
    }
    while(!qx.empty()){
        int r=qx.front(),c=qy.front(),ld=qdir.front(),d=qdis.front(),count=qcount.front();
        qx.pop(),qy.pop(),qdir.pop(),qcount.pop(),qdis.pop();
        if(r==tr&&c==tc){
            cout<<d<<endl;
            return 0;
        }
        for(int i=0;i<4;i++){
            int nr=r+a[i];
            int nc=c+b[i];
            if(v[nr][nc]=='#') continue;
            int new_c=(ld==i)? count+1:1;
            if(new_c>3) continue;
            if(visit[nr][nc][i][new_c]) continue;
            visit[nr][nc][i][new_c]=true;
            qdis.push(d+1);
            qx.push(nr);
            qy.push(nc);
            qcount.push(new_c);
            qdir.push(i);
        }
    }
    cout<<-1<<endl;
}