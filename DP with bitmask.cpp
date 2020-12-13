  int rec(int mask, vector<vector<int>> &A)
{   
    
    if(mask == (1<<n)-1) return 0;

    if(vis[mask] != 0) return dp[mask];
    vis[mask] = 1;
    int row = 0, tmp = mask, res = INT_MIN;
    //count set bits
    while(tmp)
    {
        if(tmp%2) row++;

        tmp /= 2;
    }

    for(int col=0;col<n;col++)
    {
        //cout<<row<<endl;
        if((mask&(1<<col)) == 0)
        {
            res = max(res, A[row][col] + rec(mask|(1<<col), A));
        }
   } 
    dp[mask] = res;
    return res;

}
