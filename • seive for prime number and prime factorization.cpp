vector<ll> seive(100,1);
	ll n=100;
	for(int i=2;i*i<=n;i++){
		if(seive[i]==1){
			for(int j=i*i;j<=n;j+=i){
				seive[j]=0;
			}
		}
	}
