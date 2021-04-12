vector<ll> seive(100,1);
ll n=100;
for(int i=2;i*i<=n;i++){
	if(seive[i]==1){
		for(int j=i*i;j<=n;j+=i){
			seive[j]=0;
		}
	}
}

vector<ll> seive(100,1);
ll n=100;
for(int i=2;i<=n;i++){
	if(seive[i]==1){
		for(int j=i*i;j*j<=n;j+=i){
			if(seive[j]==0)
				seive[j]=i;
		}
	}
}
