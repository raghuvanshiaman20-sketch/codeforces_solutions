#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int c,b;
    if(n>2){
        if(n%2==0){
         c=n/2;
         b=c+1;
        }
        else{
            c=n/2+1;
            b=c+1;
        }
        for(int i=0;i<n;i++){
            if(i%2==0){
                a[i]=c;
                c--;
            }
            else{
                a[i]=b;
                b++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<1<<" "<<2<<endl;
    }
    }
}