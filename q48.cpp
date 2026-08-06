#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int j=n,c=0;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            for(int k=i+1;k<j;k++){
                if(a[i]>a[k]){
                    c++;
                    a.erase(a.begin()+k);
                    j--;
                    k--;
                }
            }
        }
        cout<<c<<endl;

        
    }
}