class Solution {
public:
    string minWindow(string s, string _t) {
        // while(invalid) append to the right
        //     else erase first
        
        int n=s.size();
        map<char,int> req;
        for(char ch :_t){
            req[ch]++;
        }
        int still_required=req.size();
        int first_taken=0,next_to_take=0;
        pair<int,int> answer{INT_MAX,0};
        
        while(true){
            if(still_required>0){
                if(next_to_take==n){
                    break;
                }
                if(--req[s[next_to_take++]]==0){
                    still_required--;
                }
            }else{
                if(req[s[first_taken++]]++ == 0){
                    still_required++;
                }
            }
            if(still_required==0){
                answer=min(answer,make_pair(next_to_take-first_taken,first_taken));
            }
        }
        if(answer.first==INT_MAX){
            return "";
        }
        return s.substr(answer.second,answer.first);
    }
};
