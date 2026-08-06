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
        int maxi=1000000,c=0;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            if(s[i]=='W'){
                c++;
            }
            a[i]=c;
        }
        int sum=0,i=0;
        for(int j=k-1;j<n;j++,i++){
            maxi=min(a[j]-sum,maxi);
            sum+=a[i];
            if(i>0) sum-=a[i-1];
            if(maxi==0)break;
        }
        cout<<maxi<<endl;
    }
}