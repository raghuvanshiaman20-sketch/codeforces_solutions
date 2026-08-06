#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        if(c=='g'){
            cout<<0<<endl;
        }
        else{
            int k=0;
            while(s[k]!='g'){
                k++;
            }
            int cnt=0,maxi=0;
            for(int i=0;i<n;i++){
                if(s[i]==c){
                    cnt++;
                }
                else if(s[i]=='g'){
                    maxi=max(cnt,maxi);
                    cnt=0;
                }
                else{
                    if(cnt>0){
                        cnt++;
                    }
                }
            }
            if(cnt!=0){
                maxi=max(cnt+k,maxi);
            }
            cout<<maxi<<endl;
        }
    }
}