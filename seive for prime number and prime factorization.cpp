template<typename T>
struct is_p_seive{
	T n;
	vector<T> seive;// get the seive
	is_p_seive(T s){// give the size of the seive
		n=s;
		seive=vector<T>(s,1);
		make();
	}
	void make(){
		for(T i=2;i*i<=n;i++){
			if(seive[i]==1){
				for(T j=i*i;j<=n;j+=i){
					seive[j]=0;
				}
			}
		}
	}
};

template<typename T>
struct f_seive{
	T n;
	vector<T> seive;// get the seive
	f_seive(T s){// give the size of the seive 
		n=s;
		seive=vector<T>(s,1);
		make();
	}
	void make(){
		for(T i=2;i*i<=n;i++){
			if(seive[i]==1){
				for(T j=i*i;j<=n;j+=i){
					if(seive[j]==1)
						seive[j]=i;
				}
			}
		}
	}
};

