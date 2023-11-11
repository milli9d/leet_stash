auto init = []{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return true;
}();


class Solution {
public:
    bool isAnagram(string s, string t) {
        /* if lengths are different then can't be anagram */
        if(s.length() != t.length()) {
            return false;
        }
        
        int32_t _memo[256u]{};
        
        /* fill first string to hash */
        for(char ch : s) {
            _memo[ch]++;
        }
        
        /* read second string to compare */
        for(char ch : t) {
            /* if character not found or already used , then not anagram */
            if(_memo[ch] <= 0) { 
                return false; 
            }
            _memo[ch]--;
        }
        
        return true;
    }
};