vector<int> sol;
vector<vector<int>> ans;
void solve(int n,int row){
	if(row==n) {
		ans.push_back(sol);
		return;
		}
	for(int col=0;col<n;col++){//choice
		sol.push_back(col);
		if(isValid(sol,n)){
			solve(n,row+1);
		}sol.pop_back();
	}
}
