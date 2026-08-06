#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,f,a,b,j=0;
        cin>>n>>f>>a>>b;
        vector<long long> m(n);
        for(int i=0;i<n;i++){
            cin>>m[i];
        }
        int e=min(a*(m[0]-0),b);
        f-=e;
        while((f>0)&&(j<n-1)){
            int d=m[j+1]-m[j];
            int s= min(a*d,b);
            f-=s;
            j++;
        }
        if(f>0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}