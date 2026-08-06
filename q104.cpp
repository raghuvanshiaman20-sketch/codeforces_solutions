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
        bool a=true;
        for(char ch:s){
            if(ch!=c){
                a=false;
                break;
            }
        }
        if(a){
            cout<<0<<endl;
            continue;
        }
        int op=-1;
        for(int i=1;i<=n;i++){
            bool ok=true;
            for(int j=i;j<=n;j+=i){
                if(s[j-1]!=c){
                    ok=false;
                    break;
                }
            }
            if(ok){
                op=i;
                break;
            }
        }
        if(op!=-1){
            cout<<1<<"\n"<<op<<endl;
        }
        else{
            cout<<2<<"\n"<<n<<" "<<n-1<<endl;
        }
    }
}