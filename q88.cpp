#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,o=0,z=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                z++;
            }
            else {
                o++;
            }
        }
        if(s[0]=='1'||s[n-1]=='1'||z==0){
            cout<<n*2<<endl;
        }
        else if(o==0){
            cout<<n<<endl;
        }
        else if(o==1){
            int j;
            for(int i=0;i<n;i++){
                if(s[i]=='1'){
                    i++;
                    j=i;
                    break;
                }
            }
            if((n-j)>=j){
                cout<<2*(n-j+1)<<endl;
            }
            else{
                cout<<2*(j)<<endl;
            }
        }
        else{
            int f;
            for(int i=0;i<n;i++){
                if(s[i]=='1'){
                    i++;
                    f=i;
                    break;
                }
            }
            int b;
            for(int i=n-1;i>=0;i--){
                if(s[i]=='1'){
                    i++;
                    b=i;
                    break;
                }
            }
            if((n-b)>=(f-1)){
                cout<<2*(n-f+1)<<endl;
            }
            else{
                cout<<2*(b)<<endl;
            }
        }

    }
}