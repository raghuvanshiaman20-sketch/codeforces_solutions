#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>  a(n);
        stack<int> st1,st2,st3,st4;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%3==0&&a[i]%2==0){
                st1.push(a[i]);
            }
            else if(a[i]%3==0){
                st3.push(a[i]);
            }
            else if(a[i]%2==0){
                st2.push(a[i]);
            }
            else{
                st4.push(a[i]);
            }
        }
        while(!st1.empty()){
                cout<< st1.top() <<" ";
                st1.pop();
        }
        while(!st2.empty()){
                cout<< st2.top() <<" ";
                st2.pop();
        }
        while(!st4.empty()){
                cout<< st4.top() <<" ";
                st4.pop();
        }
        while(!st3.empty()){
                cout<< st3.top() <<" ";
                st3.pop();
        }
        cout<<endl;
    }
}