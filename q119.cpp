#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,x;
        cin>>n>>k>>x;
        vector<int> a(k);
        if(n*(n+1)==2*x){
            if(k==n){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(n*(n+1)>2*x){
            if(k>x){
                cout<<"NO"<<endl;
            }
            else if(k==x){
                if(k==1) cout<<"YES"<<endl;
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                if(n*(n+1)-(n-k)*(n-k+1)>=2*x){
                    if(k*(k+1)<=2*x) cout<<"YES"<<endl;
                    else{
                        cout<<"NO"<<endl;
                    }
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}