#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m;
    cin>>n>>m;
    vector<string> v(n+1);
    vector<long long> ch(26);
    for(long long i=1;i<=n;i++){
        cin>>v[i];
        for(auto it:v[i]) ch[it-'A']++;
    }
    for(long long i=1;i<=n;i++){
        vector<long long> p(26);
        for(auto it:v[i]) p[it-'A']++;
        long long k=LONG_LONG_MAX;
        int fl=0;
        for(int i=0;i<26;i++){
            if(ch[i]==0) continue;
            else{
                if((ch[i]-p[i])==0||(ch[i]-p[i])*m<p[i]){
                    fl=1;
                    break;
                }
                k=min(k,((ch[i]-p[i])*m-p[i])/(ch[i]-p[i]));
            }
        }
        if(fl) cout<<-1<<" ";
        else cout<<k<<" ";
    }
}