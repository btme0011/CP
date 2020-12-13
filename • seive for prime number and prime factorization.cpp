 for(int i=2;i<=sqrt(n);i++){
        for(int j=i*i;j<n;j+=i){
                seive[j]=1;
         }
}
