vector<vector<double>> mul(vector<vector<double>> m1,vector<vector<double>> m2){
	vector<vector<double>> ans(2,vector<double>(2));
	fo(i,2)
		fo(j,2)
			fo(k,2)
				ans[i][k]+=m1[i][j]*m2[j][k];
	return ans;
}
 
vector<vector<double>> expo(vector<vector<double>> mat,ll n){
	vector<vector<double>> ans={{1,0},{0,1}};
	while(n>0){
		if(n%2!=0){
			ans=mul(ans,mat);
			n--;
		}else{
			n/=2;
			mat=mul(mat,mat);
		}
	}
	
	return ans;
}
