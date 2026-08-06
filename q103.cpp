#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int o=0,z=0,ch=0;
        
        for(char c:s){
            if(c=='0'){
                z++;
            }
            else{
                o++;
            }
            ch++;
        }
        vector<int> arr(ch);
        int b=min(z,o);
        int k=0;
        if(b==z){
            for(int i=0;i<ch;i++){
                if(s[i]=='1'){
                    arr[k]=i+1;
                    k++;
                }
            }
        }
        else{
            for(int i=0;i<ch;i++){
                if(s[i]=='0'){
                    arr[k]=i+1;
                    k++;
                }
            }
        }
        if(z==0||o==0){
            cout<<ch<<endl;
        }
        else if(z==o){
            cout<<0<<endl;
        }
        else {
            cout<<(ch+1-arr[b])<<endl;
        }
    }
}