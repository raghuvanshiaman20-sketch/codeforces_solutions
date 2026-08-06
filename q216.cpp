#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);  
    cin.tie(0);                     
    cout.tie(0); 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int f=0;
        for(int i=1;i<n;i++){
            if(abs(a[i]-a[i-1])<=1){
                f=1;
                break;
            }
        }
        if(f){
            cout<<0<<endl;
        }
        else{
            int flag=0;
            for(int i=0;i<(n-1);i++){
                if(a[i]<a[i+1]) continue;
                else{
                    flag=1;
                    break;
                }
            }
            if(flag){
                int flag2=0;
                for(int i=0;i<(n-1);i++){
                    if(a[i]>a[i+1]) continue;
                    else{
                        flag2=1;
                        break;
                    }   
                }
                if(flag2){
                    cout<<1<<endl;
                }
                else{
                    cout<<-1<<endl;
                }
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
}