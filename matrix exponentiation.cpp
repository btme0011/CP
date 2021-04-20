vector<vector<ll>> mat_mul(vector<vector<ll>> vec1,vector<vector<ll>> vec2){
     ll r1=vec1.size();
     ll c1=vec1[0].size();
     ll c2=vec2[0].size();
     vector<vector<ll>> ans(
     for(int i=0;i<r1;i++){
          for(int j=0;i<c2;i++){
                 for(int k=0;k<c1;k++){
                          vec[i][j]+=vec[i][k]*vec[k][j];
                  }
           }
     }
}

vector<vector<ll>> expo(vector<vector<ll>> a,int b){
           vector<vector<ll>> ans={{1,0},{0,1}};
           while(b>0){
                  if(b%2!=0) {ans=mat_mul(ans,a);b--;}
                   else {a=mat_mul(a,a);b/=2;}
            }
     return ans;
     }

