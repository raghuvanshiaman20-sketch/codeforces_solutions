#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long k;
        cin>>k;
        long long ans=LONG_LONG_MAX;
        vector<pair<long long,long long>> v(n);
        for(int i=0;i<n;i++){
            long long a,b,c;
            cin>>a>>b>>c;
            v[i].first=a+b+c;
            if(a==b&&b==c){
                v[i].second=-1;
            }
            else if(a>b||a>c||b>c){
                v[i].second=0;
            }
            else if((b==c&&a<b)||(a==b&&c>a)){
                v[i].second=2;
            }
            else{
                v[i].second=2*min({b-a+1,c-a+1,c-b+1});
            }
        }
        sort(v.begin(),v.end());
        int fl=0;
        for(int i=0;i<n;i++){
            if(v[i].second==-1){
                if(i!=0){
                    long long c=(v[i].first-v[i-1].first)*(i);
                    if(k>=c) ans=v[i].first;
                    else ans=min(v[i-1].first+k/(i),v[i].first);
                }
                else{
                    ans=v[i].first;
                }
                fl=1;
                break;
            }
            else{
                if(i==0){
                    if(k>v[i].second){
                        k-=v[i].second;
                    }
                    else{
                        ans=v[i].first;
                        fl=1;
                        break;
                    }
                }
                else{
                    long long c=v[i].second+(v[i].first-v[i-1].first)*(i);
                    if(c>=k){
                        fl=1;
                        ans=min(v[i].first,v[i-1].first+k/(i));
                        break;
                    }
                    else{
                        k-=c;
                    }
                }
            }
        }
        if(fl) cout<<ans<<endl;
        else cout<<v[n-1].first+(k/n)<<endl;
    }
}