class Solution {
public:
    int countElements(vector<int>& arr) {

        std::unordered_set<int> _memo{};
        uint32_t count = 0u;

        for(int i : arr) {
            _memo.insert(i);
        }

        for(int i : arr) {
            if(_memo.find(i + 1) != _memo.end()) {
                count++;
            }
        }

        return count;
    }
};