#include<bits/stdc++.h>
using namespace std;
int main(){
    int g,c,l,x;
    cin>>g>>c>>l;
    int max ,min;
    if(g>=c&&g>=l){
        max=g;
        if(c>=l){
            x=c;
            min=l;
        }
        else{
            x=l;
            min=c;
        }
    }
    if(c>=g&&c>=l){
        max=c;
        if(g>=l){
            x=g;
            min=l;
        }
        else{
            x=l;
            min=g;
        }
    }
    if(l>=c&&l>=g){
        max=l;
        if(c>=g){
            x=c;
            min=g;
        }
        else{
            x=g;
            min=c;
        }
    }
    if((max-min)>=10){
        cout<<"check again"<<endl;
    }
    else{
        cout<<"final "<<x<<endl;
    }
    return 0;
}