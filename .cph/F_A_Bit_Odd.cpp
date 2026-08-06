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
        vector<int> c_0(n),c_1(n);
        int cnt_0=0,cnt_1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0')   cnt_0++;
            else cnt_1++;
            c_0[i]=cnt_0;
            c_1[i]=cnt_1;
        }
        vector<long long> sub(n+1);
        for(int i=0;i<n;i++){
            if(s[i]=='0') sub[i+1]=sub[i]+c_1[i];
            else sub[i+1]=sub[i];
        }
        if(sub[n]%2==1) cout<<"Alice"<<endl;
        else{
            
        }
    }
}