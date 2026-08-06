#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int c=0,l=1000,i=0;
        while(i<n){
            if(s[i]=='0'){
                for(int j=0;j<i;j++){
                    if(s[j]=='1'){
                        l=j;
                    }
                }
                if(l<1000){
                    if((l+k)>=i){
                        i++;
                    }
                    else{
                        c++;
                        i++;
                    }
                }
                else{
                    c++;
                    i++;
                }
            }
            else{
                i++;
            }
        }
        cout<<c<<endl;
    }
}