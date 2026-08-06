#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    int i=0;
    cin>>t;
    vector<int> a(19);
    while(t){
       int dig= t%10;
       t/=10;
       if(dig>=5){
        if((dig==9)&&(t==0)){
            a[i]=9;
            i++;
            continue;
        }
        a[i]=9-dig;
       }
       else {a[i]=dig;}
       i++;
    }
    long long s=0;
    for(int j=i-1;j>=0;j--){
        s*=10;
        s+=a[j];
    }
    cout<<s<<endl;
}