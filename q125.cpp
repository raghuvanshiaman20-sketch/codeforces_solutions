#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long c=0;
        if(a>b){
            int f=0;
            while(a>=b){
                if(a==b){
                    f=1;
                    break;
                }
                if((a%8==0)&&a/8>=b){
                    c++;
                    a/=8;
                }
                else if((a%4==0)&&a/4>=b){
                    c++;
                    a/=4;
                }
                else if((a%2==0)&&a/2>=b){
                    c++;
                    a/=2;
                }
                else{
                    break;
                }
            }
            if(f){
                cout<<c<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else if(a<b){
            int f=0;
            while(b>=a){
                if(a==b){
                    f=1;
                    break;
                }
                if(a*8<=b){
                    a*=8;
                    c++;
                }
                else if(a*4<=b){
                    a*=4;
                    c++;
                }
                else if(a*2<=b){
                    a*=2;
                    c++;
                }
                else{
                    break;
                }
            }
            if(f){
                cout<<c<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else{
            cout<<0<<endl;
        }
    }
}