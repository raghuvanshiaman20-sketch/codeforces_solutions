#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> v(n+1,vector<int>(26,0));
        string s;
        for(int i=0;i<k;i++){
            cin>>s;
            for(int j=0;j<n;j++){
                v[j+1][s[j]-'a']=1;
            }
        }
        int fl=0;
        string ans="";
        for(int i=1;i<=n;i++){
            if(n%i==0){
                ans="";
                int fl4=0;
                for(int j=1;j<=i;j++){
                    int fl3=0;
                    for(int l=0;l<=25;l++){
                        int fl2=0;
                        for(int g=j;g<=n;g+=i){
                            if(v[g][l]!=1){
                                fl2=1;
                                break;
                            }
                        }
                        if(fl2==0){
                            ans+=('a'+l);
                            fl3=1;
                            break;
                        }
                    }
                    if(fl3==0){
                        fl4=1;
                        break; 
                    }
                }
                if(fl4==0){
                    fl=1;
                    break;
                }
            }
        }
        if(fl){
            string fin="";
            for(int i=1;i<=n/(ans.length());i++) fin+=ans;
            cout<<fin<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
}