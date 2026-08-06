#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);  
    cin.tie(0);                     
    cout.tie(0); 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        set<long long> st;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long cost=0,cnt=0;
        set<int> s(a.begin(),a.end());
        if(s.size()==1){
            cout<<0<<endl;
            continue;
        }
        for(int i=0;i<(n-1);i++){
            if(a[i]!=a[i+1]){
                if(cnt==0){
                    cost+=(1ll*(n-1)*a[i]);
                    st.emplace(cost);
                    cost=0;
                }
                else{
                    cost+=(1ll*(n-1-i)*a[i]);
                    st.emplace(cost);
                    cost=0;
                }
                cnt=0;
            }
            else{
                cnt++;
                if(cnt==1){
                    cost+=(1ll*i*a[i]);
                }
            }
        }
        if(cost>0){
            st.emplace(cost);
        }
        if(a[n-1]!=a[n-2]){
            st.emplace(1ll*a[n-1]*(n-1));
        }
        cout<<*(st.begin())<<endl;
    }
}