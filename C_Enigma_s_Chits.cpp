#include <bits/stdc++.h>
 
using namespace std;
#define int long long
#define nl cout << "\n"
 
 
 
signed main() {
    int t;cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        bool flag=true;
        if((b%2 ==1 ) || (c%3>a && b<2)){
            flag=false;
        }
        if(!flag){
            cout<<-1;nl;
        }
        else{
            int r=c%3;
            int p=1;
            if(b>=2){
                if(r==1){
                    cout<<p<<" "<<p+2<<endl;
                    cout<<p+1<<" "<<p+4<<endl;
                    cout<<p+3<<" "<<p+5<<endl;
                    p+=6;
                    b-=2;
                }
                if(r==2){
                    cout<<p<<" "<<p+2<<endl;
                    cout<<p+1<<" "<<p+4<<endl;
                    cout<<p+3<<" "<<p+6<<endl;
                    cout<<p+5<<" "<<p+7<<endl;
                    p+=8;
                    b-=2;
                }
            }
            else{
                if(r==1){
                    cout<<p<<" "<<p+3<<endl;
                    cout<<p+1<<" "<<p+2<<endl;
                    p+=4;
                    a--;
                }
                if(r==2){
                    cout<<p<<" "<<p+3<<endl;
                    cout<<p+1<<" "<<p+2<<endl;
                    cout<<p+4<<" "<<p+7<<endl;
                    cout<<p+5<<" "<<p+6<<endl;
                    p+=8;
                    a-=2;
                }
            }
            while(a>0){
                a--;
                cout<<p<<" "<<p+1<<endl;
                p+=2;
            }
            while(b>0){
                b-=2;
                cout<<p<<" "<<p+2<<endl;
                cout<<p+1<<" "<<p+3<<endl;
                p+=4;
            }
            c/=3;
            while(c>0){
                c--;
                cout<<p<<" "<<p+3<<endl;
                cout<<p+1<<" "<<p+4<<endl;
                cout<<p+2<<" "<<p+5<<endl;
                p+=6;
            }
        }   
    }
}