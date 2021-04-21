template<typename T>
struct is_p_seive{
	ll n;
	vector<ll> seive;
	is_p_seive(ll s){
		n=s;
		seive=vector<ll>(s,1);
		make();
	}
	void make(){
		for(int i=2;i*i<=n;i++){
			if(seive[i]==1){
				for(int j=i*i;j<=n;j+=i){
					seive[j]=0;
				}
			}
		}
	}
}

template<typename T>
struct f_seive{
	ll n;
	vector<ll> seive;
	f_seive(ll s){
		n=s;
		seive=vector<ll>(s,1);
		make();
	}
	void make(){
		for(int i=2;i*i<=n;i++){
			if(seive[i]==1){
				for(int j=i*i;j<=n;j+=i){
					if(seive[j]==1)
						seive[j]=i;
				}
			}
		}
	}
}

