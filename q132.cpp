#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        int res=500;
        long long A,B;
        for(int i=b>1?0:2-b;i<res;i++){
            A=a;
            B=b+i;
            int ans=i;
            while(A>0){
                A/=B;
                ans++;
            }
            if(ans<res) res=ans;
        }
        cout<<res<<endl;
       
	}
}