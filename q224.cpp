#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> b(n+1),a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            cin>>b[i];
        }
        vector<vector<int>> ini(n+1);
        int fl=0;
        for(int i=1;i<=n;i++){
            int l=lower_bound(b.begin(),b.end(),a[i])-b.begin();
            if(l>n){
                fl=1;
                break;
            }
            ini[l].push_back(i);
        }
        if(fl){
            cout<<-1<<endl;
            continue;
        }
        vector<int> f;
        long long ans=0;
        priority_queue<int,vector <int>,greater <int>> pq;
        for(int i=1;i<=n;i++){
            for(int idx:ini[i]){
                pq.push(idx);
            }
            if(pq.empty()){
                fl=1;
                break;
            }
            f.push_back(pq.top());
            pq.pop();
        }
        if(fl){
            cout<<-1<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(f[i]>f[j]) ans++;
            }
        }
        cout<<ans<<endl;
    }
}