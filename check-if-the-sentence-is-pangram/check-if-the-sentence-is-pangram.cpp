class Solution {
public:

    bool checkIfPangram(string sentence) {
        bool _memo[26u] = {0u};

        for(char ch : sentence) {
            _memo[tolower(ch) - 'a'] = true;
        }

        for(int i = 0 ; i < 26u ; i++) {
            if(!_memo[i]) {
                return false;
            }
        }

        return true;
    }
};