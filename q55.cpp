#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,c=0;
        cin>>n>>k;
        if(n%2==0){
            c=n/(k-1);
            if(n%(k-1)!=0){
                c++;
            }
        }
        else{
            n-=k;
            c=n/(k-1);
            if(n%(k-1)!=0){
                c++;
            }
            c++;

        }
        cout<<c<<endl;
    }
}