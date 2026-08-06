#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int y;
        deque<int> a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
            y=x;
        }
        string s="R";
        a.pop_back();
        int cnt=0;
        while(!a.empty()){
            int f=*a.begin();
            int r=*(a.end()-1);
            if((y>f&&y<r)||(y<f&&y>r)){
                if(cnt){
                    y=max(f,r);
                    cnt=0;
                }
                else{
                    y=min(f,r);
                    cnt=1;
                }
            }
            else{
                if(y<f&&y<r){
                    y=max(f,r);
                    cnt=0;
                }
                else{
                    y=min(f,r);
                    cnt=1;
                }
            }
            if(y==f){
                s+='L';
                a.pop_front();
            }
            else{
                s+='R';
                a.pop_back();
            }
        }
        cout<<s<<endl;
    }
}