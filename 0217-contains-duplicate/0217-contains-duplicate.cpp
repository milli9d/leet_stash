// Boost i/o.
auto init = [](){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return true;
}();

class Solution
{
    public:

        /**
         *@brief 
         */
        bool containsDuplicate(vector<int> &nums)
        {            
            std::unordered_set<int> _memo{};
            for(int i : nums) {
                if(_memo.find(i) != _memo.end()) {
                    return true;
                } else {
                    _memo.insert(i);
                }
            }
            return false;
        }
};