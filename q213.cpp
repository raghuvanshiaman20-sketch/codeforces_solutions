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
        vector<long long> a(n),b(n);
        long long sum=0;
        set<long long> st;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(a[i]>=b[i]){
                sum+=a[i];
                st.emplace(b[i]);
            }
            else{
                sum+=b[i];
                st.emplace(a[i]);
            }
        }
        sum+=(*(st.rbegin()));
        cout<<sum<<endl;
    }
}