#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n;
        int f=0;
        while(1){
            x=n;
            n++;
            f=1;
            while(x>0){
                int dig=x%10;
                x/=10;
                if(dig!=0){
                    if((n-1)%dig==0){
                        continue;
                    }
                    else{
                        f=0;
                        break;
                    }
                }
            }
            if(f){
                break;
            }
        }
        cout<<n-1<<endl;
    }
}