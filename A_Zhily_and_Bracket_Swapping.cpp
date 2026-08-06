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
        string a,b;
        cin>>a>>b;
        long long op_a=0,cl_a=0,op_b=0,cl_b=0;
        for(int i=0;i<n;i++){
            if(a[i]=='(') op_a++;
            else cl_a++;
            if(b[i]=='(') op_b++;
            else cl_b++;
        }
        long long op=op_a+op_b,cl=cl_a+cl_b;
        if(op!=cl||a[0]==')'||b[0]==')') cout<<"NO\n";
        else{
            int cnt=0;
            for(int i=0;i<n;i++){
                if(a[i]!=b[i]){
                    cnt++;
                    if(cnt%2==1){
                        a[i]='(';
                        b[i]=')';
                    }
                    else{
                        a[i]=')';
                        b[i]='(';
                    }
                }
            }
            int b_a=0,b_b=0,fl=0;
            for(int i=0;i<n;i++){
                if(a[i]=='(') b_a++;
                else b_a--;
                if(b_a<0){
                    fl=1;
                    break;
                }
                if(b[i]=='(') b_b++;
                else b_b--;
                if(b_b<0){
                    fl=1;
                    break;
                }
            }
            if(fl==1||b_a!=0||b_b!=0) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
}