#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> parent(n+1),lc(n+1),rc(n+1);
        vector<long long> ti(n+1),contri(n+1);
        vector<int> d(n+1,0);
        d[0]=0;
        d[1]=1;
        parent[1]=0;
        for(int i=1;i<=n;i++){
            int x,y;
            cin>>x>>y;
            if(x==0) continue;
            parent[x]=i;
            lc[i]=x;
            parent[y]=i;
            rc[i]=y;
        }
        vector<int> order(n);
        stack<int> st;
        st.push(1);
        int idx=0;
        while(!st.empty()){
            int v=st.top();
            st.pop();
            order[idx]=v;
            idx++;
            if(lc[v]!=0){
                st.push(lc[v]),st.push(rc[v]);
            }
        }
        for(int i=n-1;i>=0;i--){
            int el=order[i];
            if(lc[el]==0) ti[el]=0;
            else{
                ti[el]=(4+(ti[lc[el]]%mod+ti[rc[el]]%mod))%mod;
            }
        }
        for(int i=0;i<n;i++){
            int el=order[i];
            d[el]=d[parent[el]]+1;
            if(parent[el]==0) contri[el]=ti[el];
            else contri[el]=(contri[parent[el]]%mod+ti[el]%mod)%mod;
        }
        vector<long long> f(n+1);
        for(int i=1;i<=n;i++){
            f[i]=((contri[i]%mod)+(d[i]%mod))%mod;
        }
        for(int i=1;i<=n;i++){
            cout<<f[i]<<" ";
        }
        cout<<endl;
    }
}