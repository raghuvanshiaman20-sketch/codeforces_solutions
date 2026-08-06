#include <bits/stdc++.h>
using namespace std;
vector<int> v(200001,0),nu(200001,0);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            v[a[i]]++;
        }
        int fl=0;
        for( auto it:a){
            if(v[it]%k!=0){
                fl=1;
                break;
            }
        }
        if(fl) cout<<0<<endl;
        else{
            long long valid=0;
            int p2=-1;
            for(int p1=0;p1<n;nu[a[p1++]]--){
                while((p2+1)<n&&(nu[a[p2+1]]+1)<=(v[a[p2+1]]/k)){
                    nu[a[++p2]]++;
                }
                valid+=(p2-p1+1);
            }
            cout<<valid<<endl;
        }
        for(auto it:a){
            v[it]=0,nu[it]=0;
        }
    }
}