#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,c=0,a=0,b=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0;i<(n/2);i++){
            if(s[i]==s[n-i-1]){
                c++;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                a++;
            }
            else{
                b++;
            }
        }
        int x=(int)(a/2)+(int)(b/2);
        int d=abs(a-b)/2;
        if(k==c){
            cout<<"YES"<<endl;
        }
        else if(k>x||k<d){
            cout<<"NO"<<endl;
        }
        else if((k<=x)&&(k%2==d%2)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        
    }
}