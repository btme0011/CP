 fact(int n){
     for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                  ans=i;
                  while(n%i==0){
                       n/=i;
                  }
            }
      }if(n!=1) ans+=n;
 }
