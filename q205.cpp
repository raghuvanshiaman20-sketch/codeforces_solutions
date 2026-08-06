#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n),maxi(n);
        long long need=0;
        for(int i=0;i<n;i++){
            cin>>a[i];  
        }
        maxi[0]=a[0];
        for(int i=1;i<n;i++){
            maxi[i]=max(maxi[i-1],a[i]);
            need=max(need,maxi[i]-a[i]);
        }
        int f=0;
        long long pre=0;
        for(int i=0;i<n;i++){
            long long present=a[i];
            long long renew=a[i]+need;
            if(present>=pre) pre=present;
            else if(renew>=pre) pre=renew;
            else{
                f=1;
                break;
            }
        }
        if(f){
            cout<<"NO"<<endl;
        }   
        else{
            cout<<"YES"<<endl;
        }
    }
}