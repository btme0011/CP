// π[i] is the length of the longest proper prefix of the substring s[0…i] which is also a suffix of this substring
// the values of the prefix function can only increase by at most one
// "abcabcd" -> [0,0,0,1,2,3,0]     "aabaaab" -> [0,1,0,1,2,2,3].
// O(n)

vector<ll> prefix_function(string s) {// pass the string for which you want the pi function
    int n = (ll)s.length();
    vector<ll> pi(n);
    for (ll i = 1; i < n; i++) {
        ll j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi; // vector of ll pi
}
