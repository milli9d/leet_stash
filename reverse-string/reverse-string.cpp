class Solution {
public:
    void reverseString(vector<char>& s) {
        /* reverse by swapping elements */
        size_t _sz = s.size();
        for(size_t i = 0u ; i < _sz/2u ; i++) {
            std::swap(s[i], s[_sz - i - 1]);
        } 
    }
};