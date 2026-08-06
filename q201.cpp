#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        long long x;
        cin>>k>>x;
        int cnt=0;
        long long ch=(1ULL <<k);
        long long y=2*ch-x;
        stack<int> st;
        while(ch!=x){
            cnt++;
            if(x<ch){
                x*=2;
                y=2*ch-x;
                st.push(1);
            }
            else{
                y*=2;
                x=2*ch-y;
                st.push(2);
            }
        }
        cout<<cnt<<endl;
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;
    }
}