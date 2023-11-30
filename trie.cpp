#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Node {
    Node* next[26];
    bool end;
};

void insert(string str, Node* node) {

    for(auto x:str) {
        
        if(node->next[x-'a']==NULL) {
            Node* tmp = new Node;
            tmp->end = 0;
            node->next[x-'a']=tmp;
        } 

        node = node->next[x-'a'];
    }
    node->end = 1;
}

bool find(string str, Node* node) {

    for(auto x:str) {
        if(node->next[x-'a'] == NULL) return 0;
        node = node->next[x-'a'];
    }
    return 1;
}

int main() {
    Node* head = new Node;

    insert("akhil",head);
    insert("akhim",head);

    cout<<find("akhil",head)<<endl;
    cout<<find("nikhil",head)<<endl;
    cout<<find("akhim",head)<<endl;


}

       
