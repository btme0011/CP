  gcd(int a,int b){
         if(a==0) return b;
         gcd(b%a,a);
}
