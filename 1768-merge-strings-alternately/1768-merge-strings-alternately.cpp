class Solution {
  public:
    string mergeAlternately(string word1, string word2) {
        /* optimise */
        if (word1.length() == 0) {
            return word2;
        }
        if (word2.length() == 0) {
            return word1;
        }

        /* traverse */
        size_t count = 0u;
        string::iterator word1_itr = word1.begin();
        string::iterator word2_itr = word2.begin();

        /* construct alternating strings till both string have characters */
        stringstream ss{};
        while (word1_itr != word1.end() && word2_itr != word2.end()) {
            if (count % 2 != 0) {
                ss << *(word2_itr++);
            } else {
                ss << *(word1_itr++);
            }
            count++;
        }

        /* push remaining characters */
        while (word1_itr != word1.end()) { ss << *(word1_itr++); }
        while (word2_itr != word2.end()) { ss << *(word2_itr++); }

        return ss.str();
    }
};