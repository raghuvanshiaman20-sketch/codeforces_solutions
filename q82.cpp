#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    vector<string> a(t);
    for(int i=0;i<t;i++){
        cin>>a[i];
        if(a[i]=="X++"||a[i]=="++X"){
            c++;
        }
        else{
            c--;
        }
    }
    cout<<c<<endl;
}