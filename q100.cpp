#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int maxi=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>maxi){
                maxi=a[i];
            }
            if(i%2!=0){
                if(maxi>a[i]){
                    a[i]=maxi;
                }
            }
        }
        long long op=0;
        
        for(int i=0;i<n;i+=2){
            if(i==0){
                if(a[i]<a[i+1]){
                    continue;
                }
                else{
                    op++;
                }
            }
            else if(i==n-1){
                if(a[i-1]>a[i]){
                    continue;
                }
                else{
                    op+=(a[i]-a[i-1]+1);
                }
            }
            else{
                op+=max(0,a[i]-min(a[i-1],a[i+1])+1);
            }
        }
        cout<<op<<endl;
    }
}