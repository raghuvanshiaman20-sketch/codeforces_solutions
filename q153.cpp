#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r,b;
        cin>>n>>r>>b;
        string s="";
        if(b==1){
            int i=r/2;
            for(int j=1;j<=i;j++){
                s+="R";
            }
            s+="B";
            for(int j=i+1;j<=r;j++){
                s+="R";
            }
            cout<<s<<endl;
        }
        else{
            int i=r/(b+1);
            int q=r%(b+1);
            int ch1=r,ch2=b;
            while(q>0){
                int j=(r+b)/(b+1);
                while(j>0){
                    s+="R";
                    j--;
                    ch1--;
                }
                if(ch2>0){
                    s+="B";
                    ch2--;
                }
                q--;
            }
            while(ch1>0){
                int j=i;
                while(j>0){
                    s+="R";
                    j--;
                    ch1--;
                }
                if(ch2>0){
                    s+="B";
                    ch2--;
                }
            }
            cout<<s<<endl;
        }
    }
}