/* speed-hacks */
auto init = [] {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return true;
}();

class Solution {
public:   
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size() == 0u) { return {};}
        std::unordered_map<int, int> _memo{};
        for(int i = 0 ; i < nums.size() ; i++) {
            if(_memo.find(nums[i]) != _memo.end()) {
                return {i, _memo.find(nums[i])->second};
            } else {
                _memo[target - nums[i]] = i;
            }
        }
        return {};
    }
};