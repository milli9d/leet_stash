class Solution {
public:

    uint32_t countBitsN(uint32_t n) {
        int count = 0;
        while(n) {
            n = n & (n-1);
            count++;
        }
        return count;
    }

    vector<int> countBits(int n) {
        std::vector<int> out{};
        for(int i = 0 ; i <= n ; i++) {
            out.push_back(countBitsN(i));
        }
        return out;
    }
};