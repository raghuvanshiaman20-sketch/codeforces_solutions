#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,min=10,c;
        cin>>n;
        while(n>0){
            c=n%10;
            n/=10;
            if(min>c){
                min=c;
            }
        }
        cout<<min<<endl;
    }
}