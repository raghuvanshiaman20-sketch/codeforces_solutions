#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int x=s.length();
        if(x==1){
            cout<<1<<endl;
            continue;
        }
        int start=3000001,end=0;
        for(int i=0;i<x;i++){
            if(s[i]=='<') end=max(end,i);
            if(s[i]=='>') start=min(start,i);
        }
        if((start<end)||(s.find("**")!=-1)||(s.find(">*")!=-1)||(s.find("*<")!=-1)){
            cout<<-1<<endl;
            continue;
        }
        else{
            int cnt=1,maxi=0;
            for(int i=1;i<x;i++){
                if(s[i]==s[i-1]) cnt++;
                else{
                    if(s[i]=='>'&&s[i-1]=='<'){
                        maxi=max(cnt,maxi);
                        cnt=1;
                    }
                    else if(s[i]=='*'&&s[i-1]=='<'){
                        maxi=max(cnt,maxi);
                        cnt=1;
                    }
                    else{
                        cnt++;
                    }
                }
            }
            maxi=max(cnt,maxi);
            cnt=1;
            for(int i=x-1;i>0;i--){
                if(s[i]==s[i-1]) cnt++;
                else{
                    if(s[i]=='>'&&s[i-1]=='<'){
                        maxi=max(cnt,maxi);
                        cnt=1;
                    }
                    else if(s[i]=='>'&&s[i-1]=='*'){
                        maxi=max(cnt,maxi);
                        cnt=1;
                    }
                    else{
                        cnt++;
                    }
                }
            }
            maxi=max(cnt,maxi);
            cout<<maxi<<endl;
        }
    }
}