#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<pair<long long,long long>> v(n);
    for(int i=0;i<n;i++){
        long long f,s;
        cin>>f>>s;
        v[i].first=s;
        v[i].second=f;
    }
    sort(v.begin(),v.end());
    long long t1=-1,t2=-1,cnt=0;
    for(int i=0;i<n;i++){
        if(v[i].second<=min(t1,t2)) continue;
        else{
            cnt++;
            if(v[i].second>t1&&v[i].second>t2){
                if(t1>=t2) t1=v[i].first;
                else t2=v[i].first;
            }
            else{
                if(t1>t2) t2=v[i].first;
                else t1=v[i].first;
            }
        }
    }
    if(cnt==n) cout<<"YES"<<endl;
    else cout<<"NO\n";
}
