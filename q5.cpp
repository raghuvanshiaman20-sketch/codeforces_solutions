#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b="";
    cin>>a;
    int j=0,flag,c=0;
    for(int k=0;a[k]!='\0';k++){
        flag=0;
        for(int i=0;b[i]!='\0';i++){
            if(b[i]==a[k]){
                flag=1;
            }
        }
        if(flag==0){
            b[j]=a[k];
            j++;
            c++;
        }
    }
    if(c%2==0)
    cout<<"CHAT WITH HER!"<<endl;
    else
    cout<<"IGNORE HIM!"<<endl;
    return 0;
}