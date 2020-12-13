vector<vector<ll>> mat_mul{
     for(int i=0;i<n;i++){
          for(int j=0;i<n;i++){
                 for(int k=0;k<n;k++){
                          vec[i][k]+=vec[i][j]*vec[j][k];
                  }
           }
     }
}

expo(vector<vector<ll>> a,int b){
           vector<vector<ll>> ans={{1,0},{0,1}};
           while(b>0){
                  if(b%2!=0) {mat_mul(ans,a);b--;}
                   else {mat_mul(ans,ans);b/=2;}
            }
     }

