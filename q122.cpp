#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long c=0;
        int f=0;
        while(n!=1){
            if(n%3!=0){
                f=1;
                break;
            }
            else if(n%6==0){
                c++;
                n/=6;
            }
            else{
                c+=2;
                n/=3;
            }
        }
        if(f){
            cout<<-1<<endl;
            continue;
        }
        cout<<c<<endl;
    }
}