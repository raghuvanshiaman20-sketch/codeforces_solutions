#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        int f=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long p,q;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int x=a[j]%a[i];
                if(x%2==0){
                    p=a[j];
                    q=a[i];
                    f=1;
                    break;
                }
            }
        }
        if(f){
            cout<<q<<" "<<p<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}