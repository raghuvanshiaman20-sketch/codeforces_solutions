#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        long long z;
        long long f=0;
        if(x==0||y==0){
            if(x==0){
                z=y;
            }
            else{
                z=x;
            }
        }
        else if(x==1||y==1){
            if(x==1&&y==1){
                z=1;
            }
            else if(x==1){
                z=y-1;
            }
            else{
                z=x-1;
            }
        }
        else{
            z=__gcd(x,y);
        }
        cout<<z%676767677<<endl;
        if(z==1||x==1||y==1||x==0||y==0){
            long long p=x,n=y;
            while(p>0||n>0){
                if(p>0){
                    cout<<1<<" ";
                    p--;
                }
                else{
                    cout<<-1<<" ";
                    n--;
                }
            }    
        }
        else{
            long long p=x/z;
            long long n=y/z;
            long long k=z;
            while(k>0){
                while (p>0||n>0){
                    if(p>0){
                        cout<<1<<" ";
                        p--;
                    }
                    if(n>0){
                        cout<<-1<<" ";
                        n--;
                    }
                }
                k--;
                p=x/z;
                n=y/z;  
            }
        }
        cout<<endl;
    }
}