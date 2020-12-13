void solve(){
	vector<tuple<ll,ll,ll>> query(m); // node,color,index
	fo(i,m){
		ll a,b;// node below a appearing atleast b times
		cin>>a>>b;
		query[i]={a,b,i};
	}
	
	flatten(1,-1,edge);// flattent the tree
	
	sort(query.begin(),query.end(),comp); // sort as in mos algorithm
	
	ll l=1;
	ll r=0;
	fo(i,m){
		ll ql=s[get<0>(query[i])]; //node in the flatten tree 
		ll qr=e[get<0>(query[i])];//node in the flatten tree 
		ll times=get<1>(query[i]);// min times to occur
		ll index=get<2>(query[i]); 
		
		while(ql<l){
			l--;
			add(l,vec);
		}
		while(qr>r){
			r++;
			add(r,vec);
		}
		
		
		
		while(ql>l){
			remove(l,vec);
			l++;
		}
		
		while(qr<r){
			remove(r,vec);
			r--;
		}
		
		ans[index]=findans(times);
	}
	
	fo(i,m) cout<<ans[i]<<endl;
	
}
