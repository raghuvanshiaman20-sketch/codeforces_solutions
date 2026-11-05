#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll m=998244353;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> v;
        int to=0;
        for(int i=0;i<n;i++){
            ll x=a[i];
            if(a[i]%10>0){
                while(x>0){
                    x/=10;
                    to++;
                }
            }
            else{
                int d=x%10;
                int cnt=0;
                while(d==0&&x>0){
                    x/=10;
                    d=x%10;
                    cnt++;
                }
                v.push_back(cnt);
                while(x>0){
                    x/=10;
                    to++;
                }
            }
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(i%2==1){
                to+=v[i];
            }
        }
        if(to>=m+1) cout<<"Sasha\n";
        else cout<<"Anna\n";
    }
}