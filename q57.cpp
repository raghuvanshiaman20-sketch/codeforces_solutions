#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,m,l;
        cin>>n>>s;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
    if((n>1)&&(s>=a[0])&&(s<=a[n-1])){
        if((s-a[0])>=(a[n-1]-s)){
            m=a[n-1]-s;
            l=s-a[0];
        }
        else{
            l=a[n-1]-s;
            m=s-a[0];
        }
        cout<<2*m + l<<endl;
    }
    else if((n==1)||s<a[0]){
        cout<<abs(s-a[n-1])<<endl;
    }
    else if(s>a[n-1]){
        cout<<abs(s-a[0])<<endl;
    }
    }
}