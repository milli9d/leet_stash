class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        bool _memo[UINT8_MAX]{false};
        int max_len = 0;

        string::iterator left = s.begin();
        string::iterator right = s.begin();

        while(left != s.end() && right != s.end()) {
            if(_memo[*right]) {
                max_len = max(max_len, static_cast<int>(right - left));
                _memo[*left] = false;
                left++;
            } else {
                /* keep expanding window till unique */
                _memo[*right] = true;
                right++;
            }
        }
        
        return max(max_len, static_cast<int>(right - left));
    }
};