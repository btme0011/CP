const BLOCK_SIZE=700;
bool cmp(pair<int, int> p, pair<int, int> q) {
    if (p.first / BLOCK_SIZE != q.first / BLOCK_SIZE)
        return p < q;
    return (p.first / BLOCK_SIZE & 1) ? (p.second < q.second) : (p.second > q.second);
}

ll ans=0;// answer after removing or adding index
void remove(idx);  // TODO: remove value at idx from data structure and change ans
void add(idx);     // TODO: add value at idx from data structure ans change ans


vector<int> mo_s_algorithm(vector<tuple<ll,ll,ll>> queries) {// l,r,idx -> tuple<ll,ll,ll>
    vector<int> answers(queries.size());
    sort(queries.begin(), queries.end(),cmp);

    // TODO: initialize data structure

    int cur_l = 0;
    int cur_r = -1;
    // invariant: data structure will always reflect the range [cur_l, cur_r]
    for (Query q : queries) {
        while (cur_l > q.l) {
            cur_l--;
            add(cur_l);
        }
        while (cur_r < q.r) {
            cur_r++;
            add(cur_r);
        }
        while (cur_l < q.l) {
            remove(cur_l);
            cur_l++;
        }
        while (cur_r > q.r) {
            remove(cur_r);
            cur_r--;
        }
        answers[q.idx] = ans;
    }
    return answers; // answer for all queries
}
