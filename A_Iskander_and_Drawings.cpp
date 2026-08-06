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
        long long maxi=0,cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                cnt=0;
            }
            else{
                cnt++;
                maxi=max(cnt,maxi);
            }
        }
        cout<<(maxi+1)/2<<endl;
    }
}
