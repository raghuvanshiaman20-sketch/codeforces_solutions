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
        string s;
        cin>>s;
        stack<int> st;
        vector<int> a(n+1);
        for(int i=0;i<n;i++){
            if(s[i]=='3'){
                a[i+1]=1;
            }
            else if(s[i]=='2'){
                if(st.empty()){
                    a[i+1]=1;
                }
                else{
                    a[st.top()]=1;
                    st.pop();
                }
            }
            else{
                st.push(i+1);
            }
        }
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(a[i]==0) cnt++;
        }
        cout<<cnt<<endl;
        for(int i=1;i<=n;i++){
            if(a[i]==0) cout<<i<<" ";
        }
        cout<<endl;
    }
}