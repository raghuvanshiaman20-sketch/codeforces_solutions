
        long long n,k,q;
        cin>>n>>k>>q;
        vector<long long> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>q) b[i]=0;
            else b[i]=1;
        }
        long long c=0;
        long long p1=0;
        for(int i=0;i<n;i++){
            if(b[i]==1) p1++;
            else{
                if(p1<k){
                    p1=0;
                    continue;
                }
                else{
                    int i=0;
                    while(p1>=k){
                        i++;
                        c+=i;
                        p1--;
                    }
                    p1=0;
                }
            }
        }
        if(p1>=k){
            int i=0;
            while(p1>=k){
                i++;
                c+=i;
                p1--;
            }
             p1=0;
        }
        cout<<c<<endl;
    }
}