 expo(int a,int b){
           int ans=1;
           while(b>0){
                  if(b%2!=0) {ans*=a;b--;}
                   else {a*=a;b/=2;}
            }
     }
