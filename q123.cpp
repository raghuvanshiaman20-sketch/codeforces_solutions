#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int f=0,j;
    for(int i=0;i<(n-1);i++){
        if(s[i]<=s[i+1]){
            continue;
        }
        else{
            f=1;
            j=i;
            break;
        }
    }
    if(f){
        cout<<"YES"<<endl;
        cout<<j+1<<" "<<j+2<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
