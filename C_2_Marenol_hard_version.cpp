#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        string a,b;
        cin>>n>>a>>b;
        vector<int> pa[2],pb[2];
        for(int i=0;i<n;+i++) {
            if(a[i]=='1') pa[i%2].push_back(i);
            if(b[i]=='1') pb[i%2].push_back(i);
        }
        if (pa[0].size()!=pb[0].size()||pa[1].size()!=pb[1].size()) {
            cout<<-1<<endl;
            continue;
        }
        long long ans=0;
        for(int p=0;p<2;p++){
            for(int i=0;i<(int)pa[p].size();i++) {
                ans+=abs(pa[p][i]-pb[p][i])/2;
            }
        }
        cout<<ans<<endl;
    }
}