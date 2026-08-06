#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        vector<long long> a(n),b(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        long long s=0,prev,bonus=0,k=0;
        sort(a.begin(),a.end());
        for(long long i=0,j=n-1;i<=j;){
            prev=s/x;
            if((s+a[i])/x==prev){
                s+=a[i];
                b[k]=a[i];
                k++;
                i++;
            }
            else{
                bonus+=a[j];
                b[k]=a[j];
                s+=a[j];
                k++;
                j--;
                
            }
        }
        cout<<bonus<<endl;
        for(long long i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}