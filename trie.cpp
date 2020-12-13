struct node{
	char ch;
	node* next[26];
	bool end;
};

void insert(string str,node* head){
	for(int i=0;i<(ll)str.size();i++){
		if(head->next[(str[i]-'a')]==NULL){
			node* nxt=new node;
			nxt->ch=str[i];
			nxt->end=0;
			head->next[(str[i]-'a')]=nxt;
		}
		head=head->next[str[i]-'a'];
		if(i==(ll)str.size()-1) head->end=1;
	}
}

string solve(){
	node* head=new node;
	insert("akhil",head);
	insert("akmst",head);
	insert("allmns",head);
	
	ret("");
}
