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
        long long k;
        cin>>n>>k;
        vector<long long> a(n);
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        sort(a.begin(),a.end());
        if(((a[n-1]-a[0])>(k+1))||(a[n-1]==a[n-2]&&(a[n-1]-a[0]>=(k+1)))){
            cout<<"Jerry"<<endl;
        }
        else{
            if(sum%2==0){
                cout<<"Jerry"<<endl;
            }
            else{
                cout<<"Tom"<<endl;
            }
        }
    }
}