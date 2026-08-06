#include <bits/stdc++.h>
using namespace std;
vector<int> freq(500001);
long long merge(vector<int> &arr,int l,int r){
    if(l>=r) return 0;
    int mid=(l+(r-l)/2);
    long long inv=0;
    inv+=merge(arr,l,mid);
    inv+=merge(arr,mid+1,r);
    vector<int> temp;
    int i=l,j=mid+1;
    while(i<=mid&&j<=r){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            inv+=(mid-i+1);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=r){
        temp.push_back(arr[j]);
        j++;
    }
    for(int k=l;k<=r;k++){
        arr[k]=temp[k-l];
    }
    return inv;
}
long long inv_count(vector<int>& arr){
    return merge(arr,0,arr.size()-1);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int f=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            freq[a[i]]++;
            if(freq[a[i]]>=2) f=1;
        }
        for(auto it:a) freq[it]=0;
        if(f==1) cout<<"YES"<<endl;
        else{
            long long k=inv_count(a);
            if(k%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}